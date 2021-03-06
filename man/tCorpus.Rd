% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/documentation_overview.r
\name{tCorpus}
\alias{tCorpus}
\alias{tcorpus}
\title{tCorpus: a corpus class for tokenized texts}
\description{
The tCorpus is a class for managing tokenized texts, stored as a data.frame in which each row represents a token, and columns contain the positions and features of these tokens.
}
\section{Methods and Functions}{


The corpustools package uses both functions and methods for working with the tCorpus.

Methods are used for all operations that modify the tCorpus itself, such as subsetting or adding columns.
This allows the data to be \link[=tCorpus_modify_by_reference]{modified by reference}.
Methods are accessed using the dollar sign after the tCorpus object. For example, if the tCorpus is named tc, the subset method can be called as tc$subset(...)

Functions are used for all operations that return a certain output, such as search results or a semantic network.
These are used in the common R style that you know and love. For example, if the tCorpus is named tc, a semantic network can be created with semnet(tc, ...)
}

\section{Overview of methods and functions}{


The primary goal of the tCorpus is to facilitate various corpus analysis techniques. The documentation for currently implemented techniques can be reached through the following links.
\tabular{ll}{
  \link[=tCorpus_create]{Create a tCorpus} \tab Functions for creating a tCorpus object \cr
  \link[=tCorpus_data]{Manage tCorpus data} \tab Methods for viewing, modifying and subsetting tCorpus data \cr
  \link[=tCorpus_features]{Features} \tab Preprocessing, subsetting and analyzing features \cr
  \link[=tCorpus_querying]{Using search strings} \tab Use Boolean queries to analyze the tCorpus \cr
  \link[=tCorpus_semnet]{Co-occurrence networks}  \tab Feature co-occurrence based semantic network analysis \cr
  \link[=tCorpus_compare]{Corpus comparison} \tab Compare corpora \cr
  \link[=tCorpus_topmod]{Topic modeling}  \tab Create and visualize topic models \cr
  \link[=tCorpus_docsim]{Document similarity} \tab Calculate document similarity \cr
}
}

