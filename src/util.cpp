#include <Rcpp.h>
#include <unistd.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector timesThree(NumericVector x) {
  return x * 3;
}


// [[Rcpp::plugins(openmp)]]

// [[Rcpp::export(wait_a_second_omp)]]
bool wait_a_second_omp(int sec, int ncores)
{

 #if defined(_OPENMP)
  #pragma omp parallel num_threads(ncores)
  #pragma omp for
 #endif
 for(int ii = 0; ii < sec; ii++)
 {
  sleep(1);
 }

 return 1;
 }

// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically
// run after the compilation.
//