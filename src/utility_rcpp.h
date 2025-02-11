#ifndef GUARD_utility_rcpp_
#define GUARD_utility_rcpp_

#include<RcppArmadillo.h>
#include "X_struct.h"
// #include "omp.h"



// utility functions that rely on Rcpp packages

void rcpp_to_std2(arma::mat y, arma::mat X, arma::mat Xtest, std::vector<double> &y_std, double &y_mean, Rcpp::NumericMatrix &X_std, Rcpp::NumericMatrix &Xtest_std, matrix<size_t> &Xorder_std);

void rcpp_to_std2(arma::mat X, arma::mat Xtest, Rcpp::NumericMatrix &X_std, Rcpp::NumericMatrix &Xtest_std, matrix<size_t> &Xorder_std);

void Matrix_to_NumericMatrix(matrix<double> &a, Rcpp::NumericMatrix &b);

#endif