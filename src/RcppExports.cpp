// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// collapse_terms_cpp
std::vector<std::string> collapse_terms_cpp(std::vector<std::string>& term, LogicalVector& collapse, std::string sep, std::string sep2);
RcppExport SEXP _corpustools_collapse_terms_cpp(SEXP termSEXP, SEXP collapseSEXP, SEXP sepSEXP, SEXP sep2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type term(termSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type collapse(collapseSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep2(sep2SEXP);
    rcpp_result_gen = Rcpp::wrap(collapse_terms_cpp(term, collapse, sep, sep2));
    return rcpp_result_gen;
END_RCPP
}
// uncollapse_terms_cpp
std::map<std::string,std::vector<std::string>> uncollapse_terms_cpp(std::vector<std::string>& term, std::string sep);
RcppExport SEXP _corpustools_uncollapse_terms_cpp(SEXP termSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type term(termSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(uncollapse_terms_cpp(term, sep));
    return rcpp_result_gen;
END_RCPP
}
// do_code_dictionary
DataFrame do_code_dictionary(NumericVector feature, std::vector<int>& context, std::vector<int>& token_id, NumericVector which, List dict, int hit_id_offset, bool verbose);
RcppExport SEXP _corpustools_do_code_dictionary(SEXP featureSEXP, SEXP contextSEXP, SEXP token_idSEXP, SEXP whichSEXP, SEXP dictSEXP, SEXP hit_id_offsetSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type feature(featureSEXP);
    Rcpp::traits::input_parameter< std::vector<int>& >::type context(contextSEXP);
    Rcpp::traits::input_parameter< std::vector<int>& >::type token_id(token_idSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type which(whichSEXP);
    Rcpp::traits::input_parameter< List >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< int >::type hit_id_offset(hit_id_offsetSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(do_code_dictionary(feature, context, token_id, which, dict, hit_id_offset, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fast_factor_cpp
SEXP fast_factor_cpp(SEXP x, SEXP levs);
RcppExport SEXP _corpustools_fast_factor_cpp(SEXP xSEXP, SEXP levsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type levs(levsSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_factor_cpp(x, levs));
    return rcpp_result_gen;
END_RCPP
}
// AND_hit_ids_cpp
NumericVector AND_hit_ids_cpp(NumericVector con, NumericVector subcon, NumericVector term_i, double n_unique, std::vector<std::string> group_i, LogicalVector replace, bool feature_mode);
RcppExport SEXP _corpustools_AND_hit_ids_cpp(SEXP conSEXP, SEXP subconSEXP, SEXP term_iSEXP, SEXP n_uniqueSEXP, SEXP group_iSEXP, SEXP replaceSEXP, SEXP feature_modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type con(conSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type subcon(subconSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type term_i(term_iSEXP);
    Rcpp::traits::input_parameter< double >::type n_unique(n_uniqueSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type group_i(group_iSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< bool >::type feature_mode(feature_modeSEXP);
    rcpp_result_gen = Rcpp::wrap(AND_hit_ids_cpp(con, subcon, term_i, n_unique, group_i, replace, feature_mode));
    return rcpp_result_gen;
END_RCPP
}
// proximity_hit_ids_cpp
NumericVector proximity_hit_ids_cpp(NumericVector con, NumericVector subcon, NumericVector pos, NumericVector term_i, double n_unique, double window, NumericVector seq_i, LogicalVector replace, bool feature_mode, bool directed);
RcppExport SEXP _corpustools_proximity_hit_ids_cpp(SEXP conSEXP, SEXP subconSEXP, SEXP posSEXP, SEXP term_iSEXP, SEXP n_uniqueSEXP, SEXP windowSEXP, SEXP seq_iSEXP, SEXP replaceSEXP, SEXP feature_modeSEXP, SEXP directedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type con(conSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type subcon(subconSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type term_i(term_iSEXP);
    Rcpp::traits::input_parameter< double >::type n_unique(n_uniqueSEXP);
    Rcpp::traits::input_parameter< double >::type window(windowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type seq_i(seq_iSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type replace(replaceSEXP);
    Rcpp::traits::input_parameter< bool >::type feature_mode(feature_modeSEXP);
    Rcpp::traits::input_parameter< bool >::type directed(directedSEXP);
    rcpp_result_gen = Rcpp::wrap(proximity_hit_ids_cpp(con, subcon, pos, term_i, n_unique, window, seq_i, replace, feature_mode, directed));
    return rcpp_result_gen;
END_RCPP
}
// sequence_hit_ids_cpp
NumericVector sequence_hit_ids_cpp(NumericVector con, NumericVector subcon, NumericVector pos, NumericVector term_i, double length);
RcppExport SEXP _corpustools_sequence_hit_ids_cpp(SEXP conSEXP, SEXP subconSEXP, SEXP posSEXP, SEXP term_iSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type con(conSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type subcon(subconSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type term_i(term_iSEXP);
    Rcpp::traits::input_parameter< double >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(sequence_hit_ids_cpp(con, subcon, pos, term_i, length));
    return rcpp_result_gen;
END_RCPP
}
// ngrams_cpp
CharacterVector ngrams_cpp(CharacterVector tokens, CharacterVector group, int n, std::string sep, std::string empty);
RcppExport SEXP _corpustools_ngrams_cpp(SEXP tokensSEXP, SEXP groupSEXP, SEXP nSEXP, SEXP sepSEXP, SEXP emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type tokens(tokensSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< std::string >::type empty(emptySEXP);
    rcpp_result_gen = Rcpp::wrap(ngrams_cpp(tokens, group, n, sep, empty));
    return rcpp_result_gen;
END_RCPP
}
// parse_query_cpp
List parse_query_cpp(std::string x);
RcppExport SEXP _corpustools_parse_query_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_query_cpp(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_corpustools_collapse_terms_cpp", (DL_FUNC) &_corpustools_collapse_terms_cpp, 4},
    {"_corpustools_uncollapse_terms_cpp", (DL_FUNC) &_corpustools_uncollapse_terms_cpp, 2},
    {"_corpustools_do_code_dictionary", (DL_FUNC) &_corpustools_do_code_dictionary, 7},
    {"_corpustools_fast_factor_cpp", (DL_FUNC) &_corpustools_fast_factor_cpp, 2},
    {"_corpustools_AND_hit_ids_cpp", (DL_FUNC) &_corpustools_AND_hit_ids_cpp, 7},
    {"_corpustools_proximity_hit_ids_cpp", (DL_FUNC) &_corpustools_proximity_hit_ids_cpp, 10},
    {"_corpustools_sequence_hit_ids_cpp", (DL_FUNC) &_corpustools_sequence_hit_ids_cpp, 5},
    {"_corpustools_ngrams_cpp", (DL_FUNC) &_corpustools_ngrams_cpp, 5},
    {"_corpustools_parse_query_cpp", (DL_FUNC) &_corpustools_parse_query_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_corpustools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
