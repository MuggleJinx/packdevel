library(Rcpp)
library(devtools)
load_all()

Rcpp::compileAttributes()

timesThree(3)
check()

.Library
.libPaths()
?INSTALL
?install.packages()

getOption("repos")
install.packages("ngme2")

check()
wait_a_second_omp(4,4)
