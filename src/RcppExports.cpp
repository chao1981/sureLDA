// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lda_rcpp
arma::umat lda_rcpp(arma::uvec d, arma::uvec w, arma::uvec z, arma::umat weight, arma::mat prior, double alpha, double beta, int T, int knowndiseases, int burnin, int ITER);
RcppExport SEXP _sureLDA_lda_rcpp(SEXP dSEXP, SEXP wSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP priorSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP TSEXP, SEXP knowndiseasesSEXP, SEXP burninSEXP, SEXP ITERSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type w(wSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type knowndiseases(knowndiseasesSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type ITER(ITERSEXP);
    rcpp_result_gen = Rcpp::wrap(lda_rcpp(d, w, z, weight, prior, alpha, beta, T, knowndiseases, burnin, ITER));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sureLDA_lda_rcpp", (DL_FUNC) &_sureLDA_lda_rcpp, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_sureLDA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}