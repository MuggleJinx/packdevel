
#' Bind 2 factors
#'
#' @param a facotr
#' @param b factor
#'
#' @return factor
#' @export
#'
#' @examples
#' fbind(factor("sb"), factor("hh"))

fbind <- function(a, b) {
  factor(c(as.character(a), as.character(b)))
}
