#' Search for documents or sentences using Boolean queries
#'
#' @section Usage:
#' ## R6 method for class tCorpus. Use as tc$method (where tc is a tCorpus object).
#'
#' \preformatted{search_contexts(query, code = NULL, feature = 'token', context_level = c('document','sentence'), verbose = F)}
#'
#' @param query A character string that is a query. See details for available query operators and modifiers. Can be multiple queries (as a vector), in which case it is recommended to also specifiy the code argument, to label results.
#' @param code If given, used as a label for the results of the query. Especially usefull if multiple queries are used.
#' @param feature The name of the feature column
#' @param context_level Select whether the queries should occur within while "documents" or specific "sentences". Returns results at the specified level.
#' @param verbose If TRUE, progress messages will be printed
#'
#' @details
#' Brief summary of the query language
#'
#' The following operators and modifiers are supported:
#' \itemize{
#'    \item{The standaard Boolean operators: AND, OR and NOT. As a shorthand, an empty space can be used as an OR statement, so that "this that those" means "this OR that OR those". NOT statements stricly mean AND NOT, so should only be used between terms. If you want to find \emph{everything except} certain terms, you can use * (wildcard for \emph{anything}) like this: "* NOT (this that those)".}
#'    \item{For complex queries parentheses can (and should) be used. e.g. '(spam AND eggs) NOT (fish and (chips OR albatros))}
#'    \item{Wildcards ? and *. The questionmark can be used to match 1 unknown character or no character at all, e.g. "?at" would find "cat", "hat" and "at". The asterisk can be used to match any number of unknown characters. Both the asterisk and questionmark can be used at the start, end and within a term.}
#'    \item{Multitoken strings, or exact strings, can be specified using quotes. e.g. "united states"}
#'    \item{tokens within a given token distance can be found using quotes plus tilde and a number specifiying the token distance. e.g. "climate chang*"~10}
#'    \item{Alternatively, angle brackets (<>) can be used instead of quotes, which also enables nesting exact strings in proximity/window search}
#'    \item{Queries are not case sensitive, but can be made so by adding the ~s flag. e.g. COP~s only finds "COP" in uppercase. The ~s flag can also be used on quotes to make all terms within quotes case sensitive, and this can be combined with the token proximity flag. e.g. "Marco Polo"~s10}
#'  }
#'
#' @name tCorpus$search_contexts
#' @aliases search_contexts
#' @examples
#' text = c('A B C', 'D E F. G H I', 'A D', 'GGG')
#' tc = create_tcorpus(text, doc_id = c('a','b','c','d'), split_sentences = TRUE)
#' tc$get() ## (example uses letters instead of words for simple query examples)
#'
#' hits = tc$search_contexts(c('query label# A AND B', 'second query# (A AND Q) OR ("D E") OR I'))
#' hits          ## print shows number of hits
#' hits$hits     ## hits is a list, with hits$hits being a data.frame with specific contexts
#' summary(hits) ## summary gives hits per query
#'
#' ## sentence level
#' hits = tc$search_contexts(c('query label# A AND B', 'second query# (A AND Q) OR ("D E") OR I'),
#'                           context_level = 'sentence')
#' hits$hits     ## hits is a list, with hits$hits being a data.frame with specific contexts
#'
#'
#' ## query language examples
#'
#' ## single term
#' tc$search_contexts('A')$hits
#'
#' tc$search_contexts('G*')$hits    ## wildcard *
#' tc$search_contexts('*G')$hits    ## wildcard *
#' tc$search_contexts('G*G')$hits   ## wildcard *
#'
#' tc$search_contexts('G?G')$hits   ## wildcard ?
#' tc$search_contexts('G?')$hits    ## wildcard ? (no hits)
#'
#' ## boolean
#' tc$search_contexts('A AND B')$hits
#' tc$search_contexts('A AND D')$hits
#' tc$search_contexts('A AND (B OR D)')$hits
#'
#' tc$search_contexts('A NOT B')$hits
#' tc$search_contexts('A NOT (B OR D)')$hits
#'
#'
#' ## sequence search (adjacent words)
#' tc$search_contexts('"A B"')$hits
#' tc$search_contexts('"A C"')$hits ## no hit, because not adjacent
#'
#' tc$search_contexts('"A (B OR D)"')$hits ## can contain nested OR
#' ## cannot contain nested AND or NOT!!
#'
#' tc$search_contexts('<A B>')$hits ## can also use <> instead of "".
#'
#' ## proximity search (using ~ flag)
#' tc$search_contexts('"A C"~5')$hits ## A AND C within a 5 word window
#' tc$search_contexts('"A C"~1')$hits ## no hit, because A and C more than 1 word apart
#'
#' tc$search_contexts('"A (B OR D)"~5')$hits ## can contain nested OR
#' tc$search_contexts('"A <B C>"~5')$hits    ## can contain nested sequence (must use <>)
#' tc$search_contexts('<A <B C>>~5')$hits    ## (<> is always OK, but cannot nest quotes in quotes)
#' ## cannot contain nested AND or NOT!!
#'
#'
#' ## case sensitive search
#' tc$search_contexts('g')$hits     ## normally case insensitive
#' tc$search_contexts('g~s')$hits   ## use ~s flag to make term case sensitive
#'
#' tc$search_contexts('(a OR g)~s')$hits   ## use ~s flag on everything between parentheses
#' tc$search_contexts('(a OR G)~s')$hits   ## use ~s flag on everything between parentheses
#'
#' tc$search_contexts('"a b"~s')$hits   ## use ~s flag on everything between quotes
#' tc$search_contexts('"A B"~s')$hits   ## use ~s flag on everything between quotes
tCorpus$set('public', 'search_contexts', function(query, code=NULL, feature='token', context_level=c('document','sentence'), verbose=F){
  search_contexts(self, query, code=code, feature=feature, context_level=context_level, verbose=verbose)
})

#' Subset tCorpus token data using a query
#'
#' @description
#' A convenience function that searches for contexts (documents, sentences), and uses the results to \link[=tCorpus$search_contexts]{subset} the tCorpus token data.
#'
#' See the documentation for \link[=tCorpus$search_contexts]{subset} for an explanation of the query language.
#'
#' @section Usage:
#' ## R6 method for class tCorpus. Use as tc$method (where tc is a tCorpus object).
#'
#' \preformatted{subset_query(query, feature = 'token', context_level = c('document','sentence'))}
#'
#' @param query A character string that is a query. See \link{tCorpus$search_contexts} for query syntax.
#' @param feature The name of the feature columns on which the query is used.
#' @param context_level Select whether the query and subset are performed at the document or sentence level.
#'
#' @name tCorpus$subset_query
#' @aliases subset_query
#' @examples
#' text = c('A B C', 'D E F. G H I', 'A D', 'GGG')
#' tc = create_tcorpus(text, doc_id = c('a','b','c','d'), split_sentences = TRUE)
#'
#' ## subset by reference
#' tc$subset_query('A')
#' tc$get_meta()
#'
#' ## using copy mechanic
#' tc2 = tc$subset_query('A AND D', copy=TRUE)
#'
#' tc2$get_meta()
#'
#' tc$get_meta() ## (unchanged)
tCorpus$set('public', 'subset_query', function(query, feature='token', context_level=c('document','sentence'), copy=F){
  if (copy) {
    selfcopy = self$copy()$subset_query(query=query, feature=feature, context_level=context_level, copy=F)
    return(selfcopy)
  }
  context_level = match.arg(context_level)
  hits = self$search_contexts(query, feature=feature, context_level=context_level)
  hits = hits$hits
  if (is.null(hits)) return(NULL)
  if (context_level == 'document'){
    self$select_meta_rows(self$get_meta('doc_id') %in% hits$doc_id)
  }
  if (context_level == 'sentence'){
    d = self$get(c('doc_id','sent_i'), keep_df=T)
    d$i = 1:nrow(d)
    rows = d[list(hits$doc_id, hits$sent_i)]$i
    self$select_rows(rows)
  }
  invisible(self)
})

#####################
#####################

## Function for the tCorpus$search_contexts method
search_contexts <- function(tc, query, code=NULL, feature='token', context_level=c('document','sentence'), verbose=F){
  is_tcorpus(tc, T)
  context_level = match.arg(context_level)
  if (!feature %in% tc$names) stop(sprintf('Feature (%s) is not available. Current options are: %s', feature, paste(tc$feature_names, collapse=', ')))
  codelabel = get_query_code(query, code)
  query = remove_query_label(query)

  cols = if(context_level == 'sentence') c('doc_id','sent_i') else c('doc_id')
  subcontext = if(context_level == 'sentence') 'sent_i' else NULL

  hits = vector('list', length(query))
  for (i in 1:length(query)) {
    if (verbose) print(code[i])
    q = parse_query(as.character(query[i]))
    h = recursive_search(tc, q, subcontext=subcontext, feature=feature, mode = 'contexts')
    if (!is.null(h)) {
      h[, code := codelabel[i]]
      hits[[i]] = h
    }
  }
  hits = data.table::rbindlist(hits)

  if (nrow(hits) > 0) {
    setorderv(hits, cols)
  } else {
    hits = data.frame(code=factor(), doc_id=factor(), sent_i=numeric())
  }
  queries = data.frame(code=codelabel, query=query)
  contextHits(hits, queries)
}