// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// pmat
arma::mat pmat(double x);
RcppExport SEXP _HDTD_pmat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(pmat(x));
    return rcpp_result_gen;
END_RCPP
}
// projectionmatrix
arma::mat projectionmatrix(arma::vec x);
RcppExport SEXP _HDTD_projectionmatrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(projectionmatrix(x));
    return rcpp_result_gen;
END_RCPP
}
// sumdatamatrix
arma::mat sumdatamatrix(arma::mat X, int N);
RcppExport SEXP _HDTD_sumdatamatrix(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(sumdatamatrix(X, N));
    return rcpp_result_gen;
END_RCPP
}
// centerdatamatrix
arma::mat centerdatamatrix(arma::mat X, int N);
RcppExport SEXP _HDTD_centerdatamatrix(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(centerdatamatrix(X, N));
    return rcpp_result_gen;
END_RCPP
}
// transposedatamatrix
arma::mat transposedatamatrix(arma::mat X, int N);
RcppExport SEXP _HDTD_transposedatamatrix(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(transposedatamatrix(X, N));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprodcpp
arma::mat tcrossprodcpp(arma::mat X);
RcppExport SEXP _HDTD_tcrossprodcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(tcrossprodcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// tcrossprod2cpp
arma::mat tcrossprod2cpp(arma::mat X, arma::mat Y);
RcppExport SEXP _HDTD_tcrossprod2cpp(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(tcrossprod2cpp(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// crossprodcpp
arma::mat crossprodcpp(arma::mat X);
RcppExport SEXP _HDTD_crossprodcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// crossprod2cpp
arma::mat crossprod2cpp(arma::mat X, arma::mat Y);
RcppExport SEXP _HDTD_crossprod2cpp(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprod2cpp(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// sampleSigmaR
arma::mat sampleSigmaR(arma::mat X, int N);
RcppExport SEXP _HDTD_sampleSigmaR(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleSigmaR(X, N));
    return rcpp_result_gen;
END_RCPP
}
// statistics_centered
arma::vec statistics_centered(arma::mat X, double N);
RcppExport SEXP _HDTD_statistics_centered(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(statistics_centered(X, N));
    return rcpp_result_gen;
END_RCPP
}
// statistics_trans_centered
arma::vec statistics_trans_centered(arma::mat X, double N);
RcppExport SEXP _HDTD_statistics_trans_centered(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(statistics_trans_centered(X, N));
    return rcpp_result_gen;
END_RCPP
}
// statistics
arma::vec statistics(arma::mat X, double N);
RcppExport SEXP _HDTD_statistics(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(statistics(X, N));
    return rcpp_result_gen;
END_RCPP
}
// statistics_trans
arma::vec statistics_trans(arma::mat X, double N);
RcppExport SEXP _HDTD_statistics_trans(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(statistics_trans(X, N));
    return rcpp_result_gen;
END_RCPP
}
// covmathat_statistics_centered
arma::vec covmathat_statistics_centered(arma::mat X, double N);
RcppExport SEXP _HDTD_covmathat_statistics_centered(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(covmathat_statistics_centered(X, N));
    return rcpp_result_gen;
END_RCPP
}
// covmathat_statistics_trans_centered
arma::vec covmathat_statistics_trans_centered(arma::mat X, double N);
RcppExport SEXP _HDTD_covmathat_statistics_trans_centered(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(covmathat_statistics_trans_centered(X, N));
    return rcpp_result_gen;
END_RCPP
}
// covmathat_statistics
arma::vec covmathat_statistics(arma::mat X, double N);
RcppExport SEXP _HDTD_covmathat_statistics(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(covmathat_statistics(X, N));
    return rcpp_result_gen;
END_RCPP
}
// covmathat_statistics_trans
arma::vec covmathat_statistics_trans(arma::mat X, double N);
RcppExport SEXP _HDTD_covmathat_statistics_trans(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(covmathat_statistics_trans(X, N));
    return rcpp_result_gen;
END_RCPP
}
// meanmatts_statistics
arma::vec meanmatts_statistics(arma::mat X, double N);
RcppExport SEXP _HDTD_meanmatts_statistics(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(meanmatts_statistics(X, N));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HDTD_pmat", (DL_FUNC) &_HDTD_pmat, 1},
    {"_HDTD_projectionmatrix", (DL_FUNC) &_HDTD_projectionmatrix, 1},
    {"_HDTD_sumdatamatrix", (DL_FUNC) &_HDTD_sumdatamatrix, 2},
    {"_HDTD_centerdatamatrix", (DL_FUNC) &_HDTD_centerdatamatrix, 2},
    {"_HDTD_transposedatamatrix", (DL_FUNC) &_HDTD_transposedatamatrix, 2},
    {"_HDTD_tcrossprodcpp", (DL_FUNC) &_HDTD_tcrossprodcpp, 1},
    {"_HDTD_tcrossprod2cpp", (DL_FUNC) &_HDTD_tcrossprod2cpp, 2},
    {"_HDTD_crossprodcpp", (DL_FUNC) &_HDTD_crossprodcpp, 1},
    {"_HDTD_crossprod2cpp", (DL_FUNC) &_HDTD_crossprod2cpp, 2},
    {"_HDTD_sampleSigmaR", (DL_FUNC) &_HDTD_sampleSigmaR, 2},
    {"_HDTD_statistics_centered", (DL_FUNC) &_HDTD_statistics_centered, 2},
    {"_HDTD_statistics_trans_centered", (DL_FUNC) &_HDTD_statistics_trans_centered, 2},
    {"_HDTD_statistics", (DL_FUNC) &_HDTD_statistics, 2},
    {"_HDTD_statistics_trans", (DL_FUNC) &_HDTD_statistics_trans, 2},
    {"_HDTD_covmathat_statistics_centered", (DL_FUNC) &_HDTD_covmathat_statistics_centered, 2},
    {"_HDTD_covmathat_statistics_trans_centered", (DL_FUNC) &_HDTD_covmathat_statistics_trans_centered, 2},
    {"_HDTD_covmathat_statistics", (DL_FUNC) &_HDTD_covmathat_statistics, 2},
    {"_HDTD_covmathat_statistics_trans", (DL_FUNC) &_HDTD_covmathat_statistics_trans, 2},
    {"_HDTD_meanmatts_statistics", (DL_FUNC) &_HDTD_meanmatts_statistics, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_HDTD(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}