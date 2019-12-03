// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// computeGCD
int computeGCD(int a, int b);
RcppExport SEXP _tviblindi_computeGCD(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(computeGCD(a, b));
    return rcpp_result_gen;
END_RCPP
}
// computeLCM
int computeLCM(int a, int b);
RcppExport SEXP _tviblindi_computeLCM(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(computeLCM(a, b));
    return rcpp_result_gen;
END_RCPP
}
// bicgSparse
RcppExport SEXP bicgSparse(const Eigen::Map<Eigen::SparseMatrix<double> > A, const Eigen::VectorXd b, const Eigen::Index nb_iter, const double err);
RcppExport SEXP _tviblindi_bicgSparse(SEXP ASEXP, SEXP bSEXP, SEXP nb_iterSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(bicgSparse(A, b, nb_iter, err));
    return rcpp_result_gen;
END_RCPP
}
// build_boundary_C
RcppExport SEXP build_boundary_C(Rcpp::List filtration, bool sort_input);
RcppExport SEXP _tviblindi_build_boundary_C(SEXP filtrationSEXP, SEXP sort_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type filtration(filtrationSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_input(sort_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(build_boundary_C(filtration, sort_input));
    return rcpp_result_gen;
END_RCPP
}
// cgSparse
RcppExport SEXP cgSparse(const Eigen::Map<Eigen::SparseMatrix<double> > A, const Eigen::VectorXd b, const Eigen::VectorXd iguess, const Eigen::Index nb_iter, const double err);
RcppExport SEXP _tviblindi_cgSparse(SEXP ASEXP, SEXP bSEXP, SEXP iguessSEXP, SEXP nb_iterSEXP, SEXP errSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type b(bSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd >::type iguess(iguessSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type err(errSEXP);
    rcpp_result_gen = Rcpp::wrap(cgSparse(A, b, iguess, nb_iter, err));
    return rcpp_result_gen;
END_RCPP
}
// connect_cliques
RcppExport SEXP connect_cliques(Rcpp::NumericMatrix cliques);
RcppExport SEXP _tviblindi_connect_cliques(SEXP cliquesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type cliques(cliquesSEXP);
    rcpp_result_gen = Rcpp::wrap(connect_cliques(cliques));
    return rcpp_result_gen;
END_RCPP
}
// createKNNgraph_cos
RcppExport SEXP createKNNgraph_cos(SEXP X, SEXP D, SEXP K, SEXP N);
RcppExport SEXP _tviblindi_createKNNgraph_cos(SEXP XSEXP, SEXP DSEXP, SEXP KSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type D(DSEXP);
    Rcpp::traits::input_parameter< SEXP >::type K(KSEXP);
    Rcpp::traits::input_parameter< SEXP >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(createKNNgraph_cos(X, D, K, N));
    return rcpp_result_gen;
END_RCPP
}
// createKNNgraph_eu
RcppExport SEXP createKNNgraph_eu(SEXP X, SEXP D, SEXP K, SEXP N);
RcppExport SEXP _tviblindi_createKNNgraph_eu(SEXP XSEXP, SEXP DSEXP, SEXP KSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type D(DSEXP);
    Rcpp::traits::input_parameter< SEXP >::type K(KSEXP);
    Rcpp::traits::input_parameter< SEXP >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(createKNNgraph_eu(X, D, K, N));
    return rcpp_result_gen;
END_RCPP
}
// boundaries
std::vector< std::vector<int> > boundaries(List f, bool sort_input);
RcppExport SEXP _tviblindi_boundaries(SEXP fSEXP, SEXP sort_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type f(fSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_input(sort_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(boundaries(f, sort_input));
    return rcpp_result_gen;
END_RCPP
}
// faces
std::vector< std::vector<int> > faces(List f, bool sort_input);
RcppExport SEXP _tviblindi_faces(SEXP fSEXP, SEXP sort_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type f(fSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_input(sort_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(faces(f, sort_input));
    return rcpp_result_gen;
END_RCPP
}
// rips_complex_filtration_values
SEXP rips_complex_filtration_values(List f, NumericMatrix coord, double threshold);
RcppExport SEXP _tviblindi_rips_complex_filtration_values(SEXP fSEXP, SEXP coordSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coord(coordSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(rips_complex_filtration_values(f, coord, threshold));
    return rcpp_result_gen;
END_RCPP
}
// alpha_complex_filtration_values_C
SEXP alpha_complex_filtration_values_C(List f, NumericMatrix coord, std::vector<int> f_u);
RcppExport SEXP _tviblindi_alpha_complex_filtration_values_C(SEXP fSEXP, SEXP coordSEXP, SEXP f_uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type coord(coordSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type f_u(f_uSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_complex_filtration_values_C(f, coord, f_u));
    return rcpp_result_gen;
END_RCPP
}
// firstleft
RcppExport SEXP firstleft(Eigen::Map<Eigen::SparseMatrix<double> > A, Eigen::VectorXd start, const Eigen::Index nb_iter, const double eps);
RcppExport SEXP _tviblindi_firstleft(SEXP ASEXP, SEXP startSEXP, SEXP nb_iterSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(firstleft(A, start, nb_iter, eps));
    return rcpp_result_gen;
END_RCPP
}
// get_rep_C
SEXP get_rep_C(std::vector<int> cycle, Rcpp::List boundary);
RcppExport SEXP _tviblindi_get_rep_C(SEXP cycleSEXP, SEXP boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type boundary(boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(get_rep_C(cycle, boundary));
    return rcpp_result_gen;
END_RCPP
}
// get_rep_lazy
SEXP get_rep_lazy(std::vector<int> cycle, Rcpp::List R, Rcpp::List B, bool update);
RcppExport SEXP _tviblindi_get_rep_lazy(SEXP cycleSEXP, SEXP RSEXP, SEXP BSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R(RSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type B(BSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rep_lazy(cycle, R, B, update));
    return rcpp_result_gen;
END_RCPP
}
// get_rep_lazy_2
SEXP get_rep_lazy_2(std::vector<int> cycle, Rcpp::List R, Rcpp::List B, bool update);
RcppExport SEXP _tviblindi_get_rep_lazy_2(SEXP cycleSEXP, SEXP RSEXP, SEXP BSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R(RSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type B(BSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rep_lazy_2(cycle, R, B, update));
    return rcpp_result_gen;
END_RCPP
}
// get_cycle_representation
std::vector<int> get_cycle_representation(std::vector<int> cycle, List reduced_boundary_matrix, const List nonreduced_boundaries, bool update_rb);
RcppExport SEXP _tviblindi_get_cycle_representation(SEXP cycleSEXP, SEXP reduced_boundary_matrixSEXP, SEXP nonreduced_boundariesSEXP, SEXP update_rbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< List >::type reduced_boundary_matrix(reduced_boundary_matrixSEXP);
    Rcpp::traits::input_parameter< const List >::type nonreduced_boundaries(nonreduced_boundariesSEXP);
    Rcpp::traits::input_parameter< bool >::type update_rb(update_rbSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cycle_representation(cycle, reduced_boundary_matrix, nonreduced_boundaries, update_rb));
    return rcpp_result_gen;
END_RCPP
}
// get_rep_straight
SEXP get_rep_straight(std::vector<int> cycle, Rcpp::List R, Rcpp::List B, bool update);
RcppExport SEXP _tviblindi_get_rep_straight(SEXP cycleSEXP, SEXP RSEXP, SEXP BSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R(RSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type B(BSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rep_straight(cycle, R, B, update));
    return rcpp_result_gen;
END_RCPP
}
// get_rep_straight_modified
SEXP get_rep_straight_modified(std::vector<int> cycle, Rcpp::List R, bool update);
RcppExport SEXP _tviblindi_get_rep_straight_modified(SEXP cycleSEXP, SEXP RSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type cycle(cycleSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R(RSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rep_straight_modified(cycle, R, update));
    return rcpp_result_gen;
END_RCPP
}
// get_reps_straight_modified
std::vector< std::vector<int> > get_reps_straight_modified(std::vector< std::vector<int> > cycles, Rcpp::List R, bool update);
RcppExport SEXP _tviblindi_get_reps_straight_modified(SEXP cyclesSEXP, SEXP RSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type cycles(cyclesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R(RSEXP);
    Rcpp::traits::input_parameter< bool >::type update(updateSEXP);
    rcpp_result_gen = Rcpp::wrap(get_reps_straight_modified(cycles, R, update));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_trajectories
std::vector< std::vector<double> > interpolate_trajectories(std::vector< std::vector<double> > pts, double coef);
RcppExport SEXP _tviblindi_interpolate_trajectories(SEXP ptsSEXP, SEXP coefSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<double> > >::type pts(ptsSEXP);
    Rcpp::traits::input_parameter< double >::type coef(coefSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_trajectories(pts, coef));
    return rcpp_result_gen;
END_RCPP
}
// jaccard_coeff
NumericMatrix jaccard_coeff(const NumericMatrix idx);
RcppExport SEXP _tviblindi_jaccard_coeff(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(jaccard_coeff(idx));
    return rcpp_result_gen;
END_RCPP
}
// openmp_knn_C
Rcpp::List openmp_knn_C(Rcpp::NumericMatrix coordinates, int K, int distance_function);
RcppExport SEXP _tviblindi_openmp_knn_C(SEXP coordinatesSEXP, SEXP KSEXP, SEXP distance_functionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type coordinates(coordinatesSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type distance_function(distance_functionSEXP);
    rcpp_result_gen = Rcpp::wrap(openmp_knn_C(coordinates, K, distance_function));
    return rcpp_result_gen;
END_RCPP
}
// hello
SEXP hello();
RcppExport SEXP _tviblindi_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hello());
    return rcpp_result_gen;
END_RCPP
}
// phatBoundary
Rcpp::List phatBoundary(const Rcpp::List& filtration, const int maxdimension);
RcppExport SEXP _tviblindi_phatBoundary(SEXP filtrationSEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type filtration(filtrationSEXP);
    Rcpp::traits::input_parameter< const int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(phatBoundary(filtration, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj
RcppExport SEXP C_random_walk_adj(const Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Eigen::Index nb_iter);
RcppExport SEXP _tviblindi_C_random_walk_adj(SEXP ASEXP, SEXP startSEXP, SEXP nb_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj(A, start, nb_iter));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj_N
RcppExport SEXP C_random_walk_adj_N(const Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Eigen::Index nb_iter, const Eigen::Index N);
RcppExport SEXP _tviblindi_C_random_walk_adj_N(SEXP ASEXP, SEXP startSEXP, SEXP nb_iterSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj_N(A, start, nb_iter, N));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj_N_push
RcppExport SEXP C_random_walk_adj_N_push(const Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Eigen::Index N);
RcppExport SEXP _tviblindi_C_random_walk_adj_N_push(SEXP ASEXP, SEXP startSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj_N_push(A, start, N));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj_N_push_std
RcppExport SEXP C_random_walk_adj_N_push_std(const Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Eigen::Index N);
RcppExport SEXP _tviblindi_C_random_walk_adj_N_push_std(SEXP ASEXP, SEXP startSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj_N_push_std(A, start, N));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk
RcppExport SEXP C_random_walk(const Eigen::Map<Eigen::SparseMatrix<double> > sim, int start, const Eigen::Index N);
RcppExport SEXP _tviblindi_C_random_walk(SEXP simSEXP, SEXP startSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type sim(simSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk(sim, start, N));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj_stf_N
RcppExport SEXP C_random_walk_adj_stf_N(const Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Rcpp::NumericVector beta, const double gamma, const Rcpp::NumericVector ptime, const Eigen::Index nb_iter, const Eigen::Index N);
RcppExport SEXP _tviblindi_C_random_walk_adj_stf_N(SEXP ASEXP, SEXP startSEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP ptimeSEXP, SEXP nb_iterSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type ptime(ptimeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj_stf_N(A, start, beta, gamma, ptime, nb_iter, N));
    return rcpp_result_gen;
END_RCPP
}
// C_random_walk_adj_u
RcppExport SEXP C_random_walk_adj_u(Eigen::Map<Eigen::SparseMatrix<double> > A, int start, const Eigen::Index nb_iter);
RcppExport SEXP _tviblindi_C_random_walk_adj_u(SEXP ASEXP, SEXP startSEXP, SEXP nb_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> > >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< const Eigen::Index >::type nb_iter(nb_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(C_random_walk_adj_u(A, start, nb_iter));
    return rcpp_result_gen;
END_RCPP
}
// relative_filtration
Rcpp::IntegerVector relative_filtration(std::vector<int> indices, std::vector< std::vector<int> > filtration, bool sort_output);
RcppExport SEXP _tviblindi_relative_filtration(SEXP indicesSEXP, SEXP filtrationSEXP, SEXP sort_outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type filtration(filtrationSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_output(sort_outputSEXP);
    rcpp_result_gen = Rcpp::wrap(relative_filtration(indices, filtration, sort_output));
    return rcpp_result_gen;
END_RCPP
}
// remove_back
NumericVector remove_back(const NumericMatrix triplet, const NumericVector time);
RcppExport SEXP _tviblindi_remove_back(SEXP tripletSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type triplet(tripletSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_back(triplet, time));
    return rcpp_result_gen;
END_RCPP
}
// remove_cycles_int_list
std::vector< std::vector<int> > remove_cycles_int_list(std::vector< std::vector<int> > series_list, std::vector< std::vector<int> > series_list_unique);
RcppExport SEXP _tviblindi_remove_cycles_int_list(SEXP series_listSEXP, SEXP series_list_uniqueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type series_list(series_listSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type series_list_unique(series_list_uniqueSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_cycles_int_list(series_list, series_list_unique));
    return rcpp_result_gen;
END_RCPP
}
// rips_from_spadj
SEXP rips_from_spadj(const Eigen::Map<Eigen::SparseMatrix<double> > As, int nbVertices, double threshold, int maxdimension);
RcppExport SEXP _tviblindi_rips_from_spadj(SEXP AsSEXP, SEXP nbVerticesSEXP, SEXP thresholdSEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> > >::type As(AsSEXP);
    Rcpp::traits::input_parameter< int >::type nbVertices(nbVerticesSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(rips_from_spadj(As, nbVertices, threshold, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// C_sigma
SEXP C_sigma(const NumericMatrix D, const double target, const int nIter, const double tol);
RcppExport SEXP _tviblindi_C_sigma(SEXP DSEXP, SEXP targetSEXP, SEXP nIterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const int >::type nIter(nIterSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(C_sigma(D, target, nIter, tol));
    return rcpp_result_gen;
END_RCPP
}
// unique_simplex_inds
std::vector<int> unique_simplex_inds(std::vector<std::vector<int> > cmplx, bool sort_input);
RcppExport SEXP _tviblindi_unique_simplex_inds(SEXP cmplxSEXP, SEXP sort_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::vector<int> > >::type cmplx(cmplxSEXP);
    Rcpp::traits::input_parameter< bool >::type sort_input(sort_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_simplex_inds(cmplx, sort_input));
    return rcpp_result_gen;
END_RCPP
}
// reindex_cmplx
std::vector< std::vector<int> > reindex_cmplx(std::vector< std::vector<int> > cmplx, std::vector<int> inds);
RcppExport SEXP _tviblindi_reindex_cmplx(SEXP cmplxSEXP, SEXP indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type cmplx(cmplxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type inds(indsSEXP);
    rcpp_result_gen = Rcpp::wrap(reindex_cmplx(cmplx, inds));
    return rcpp_result_gen;
END_RCPP
}
// lowerbound_rb
List lowerbound_rb(List reduced_boundary_matrix, int threshold);
RcppExport SEXP _tviblindi_lowerbound_rb(SEXP reduced_boundary_matrixSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type reduced_boundary_matrix(reduced_boundary_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(lowerbound_rb(reduced_boundary_matrix, threshold));
    return rcpp_result_gen;
END_RCPP
}
// path_1simplex_indices
std::vector< std::vector<size_t> > path_1simplex_indices(std::vector< std::vector<int> > walks, std::vector< std::vector<int> > cmplx);
RcppExport SEXP _tviblindi_path_1simplex_indices(SEXP walksSEXP, SEXP cmplxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type walks(walksSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector<int> > >::type cmplx(cmplxSEXP);
    rcpp_result_gen = Rcpp::wrap(path_1simplex_indices(walks, cmplx));
    return rcpp_result_gen;
END_RCPP
}
// witness_from_points
SEXP witness_from_points(const Rcpp::NumericMatrix landmarksin, const Rcpp::NumericMatrix ws, double alpha2, unsigned int maxdimension);
RcppExport SEXP _tviblindi_witness_from_points(SEXP landmarksinSEXP, SEXP wsSEXP, SEXP alpha2SEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type landmarksin(landmarksinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(witness_from_points(landmarksin, ws, alpha2, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// witness_from_distances
SEXP witness_from_distances(const Rcpp::List IND, const Rcpp::List DIST, double alpha2, unsigned int maxdimension);
RcppExport SEXP _tviblindi_witness_from_distances(SEXP INDSEXP, SEXP DISTSEXP, SEXP alpha2SEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type IND(INDSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type DIST(DISTSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(witness_from_distances(IND, DIST, alpha2, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// strong_witness_from_distances
SEXP strong_witness_from_distances(const Rcpp::List IND, const Rcpp::List DIST, double alpha2, unsigned int maxdimension);
RcppExport SEXP _tviblindi_strong_witness_from_distances(SEXP INDSEXP, SEXP DISTSEXP, SEXP alpha2SEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type IND(INDSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type DIST(DISTSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(strong_witness_from_distances(IND, DIST, alpha2, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// witness_from_distances_cliques
SEXP witness_from_distances_cliques(const Rcpp::List IND, const Rcpp::List DIST, double alpha2, unsigned int maxdimension);
RcppExport SEXP _tviblindi_witness_from_distances_cliques(SEXP INDSEXP, SEXP DISTSEXP, SEXP alpha2SEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type IND(INDSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type DIST(DISTSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(witness_from_distances_cliques(IND, DIST, alpha2, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// strong_witness_from_distances_cliques
SEXP strong_witness_from_distances_cliques(const Rcpp::List IND, const Rcpp::List DIST, double alpha2, unsigned int maxdimension);
RcppExport SEXP _tviblindi_strong_witness_from_distances_cliques(SEXP INDSEXP, SEXP DISTSEXP, SEXP alpha2SEXP, SEXP maxdimensionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type IND(INDSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type DIST(DISTSEXP);
    Rcpp::traits::input_parameter< double >::type alpha2(alpha2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxdimension(maxdimensionSEXP);
    rcpp_result_gen = Rcpp::wrap(strong_witness_from_distances_cliques(IND, DIST, alpha2, maxdimension));
    return rcpp_result_gen;
END_RCPP
}
// internal_sample_points
SEXP internal_sample_points(const Rcpp::NumericMatrix ws, unsigned int nbL);
RcppExport SEXP _tviblindi_internal_sample_points(SEXP wsSEXP, SEXP nbLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nbL(nbLSEXP);
    rcpp_result_gen = Rcpp::wrap(internal_sample_points(ws, nbL));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tviblindi_computeGCD", (DL_FUNC) &_tviblindi_computeGCD, 2},
    {"_tviblindi_computeLCM", (DL_FUNC) &_tviblindi_computeLCM, 2},
    {"_tviblindi_bicgSparse", (DL_FUNC) &_tviblindi_bicgSparse, 4},
    {"_tviblindi_build_boundary_C", (DL_FUNC) &_tviblindi_build_boundary_C, 2},
    {"_tviblindi_cgSparse", (DL_FUNC) &_tviblindi_cgSparse, 5},
    {"_tviblindi_connect_cliques", (DL_FUNC) &_tviblindi_connect_cliques, 1},
    {"_tviblindi_createKNNgraph_cos", (DL_FUNC) &_tviblindi_createKNNgraph_cos, 4},
    {"_tviblindi_createKNNgraph_eu", (DL_FUNC) &_tviblindi_createKNNgraph_eu, 4},
    {"_tviblindi_boundaries", (DL_FUNC) &_tviblindi_boundaries, 2},
    {"_tviblindi_faces", (DL_FUNC) &_tviblindi_faces, 2},
    {"_tviblindi_rips_complex_filtration_values", (DL_FUNC) &_tviblindi_rips_complex_filtration_values, 3},
    {"_tviblindi_alpha_complex_filtration_values_C", (DL_FUNC) &_tviblindi_alpha_complex_filtration_values_C, 3},
    {"_tviblindi_firstleft", (DL_FUNC) &_tviblindi_firstleft, 4},
    {"_tviblindi_get_rep_C", (DL_FUNC) &_tviblindi_get_rep_C, 2},
    {"_tviblindi_get_rep_lazy", (DL_FUNC) &_tviblindi_get_rep_lazy, 4},
    {"_tviblindi_get_rep_lazy_2", (DL_FUNC) &_tviblindi_get_rep_lazy_2, 4},
    {"_tviblindi_get_cycle_representation", (DL_FUNC) &_tviblindi_get_cycle_representation, 4},
    {"_tviblindi_get_rep_straight", (DL_FUNC) &_tviblindi_get_rep_straight, 4},
    {"_tviblindi_get_rep_straight_modified", (DL_FUNC) &_tviblindi_get_rep_straight_modified, 3},
    {"_tviblindi_get_reps_straight_modified", (DL_FUNC) &_tviblindi_get_reps_straight_modified, 3},
    {"_tviblindi_interpolate_trajectories", (DL_FUNC) &_tviblindi_interpolate_trajectories, 2},
    {"_tviblindi_jaccard_coeff", (DL_FUNC) &_tviblindi_jaccard_coeff, 1},
    {"_tviblindi_openmp_knn_C", (DL_FUNC) &_tviblindi_openmp_knn_C, 3},
    {"_tviblindi_hello", (DL_FUNC) &_tviblindi_hello, 0},
    {"_tviblindi_phatBoundary", (DL_FUNC) &_tviblindi_phatBoundary, 2},
    {"_tviblindi_C_random_walk_adj", (DL_FUNC) &_tviblindi_C_random_walk_adj, 3},
    {"_tviblindi_C_random_walk_adj_N", (DL_FUNC) &_tviblindi_C_random_walk_adj_N, 4},
    {"_tviblindi_C_random_walk_adj_N_push", (DL_FUNC) &_tviblindi_C_random_walk_adj_N_push, 3},
    {"_tviblindi_C_random_walk_adj_N_push_std", (DL_FUNC) &_tviblindi_C_random_walk_adj_N_push_std, 3},
    {"_tviblindi_C_random_walk", (DL_FUNC) &_tviblindi_C_random_walk, 3},
    {"_tviblindi_C_random_walk_adj_stf_N", (DL_FUNC) &_tviblindi_C_random_walk_adj_stf_N, 7},
    {"_tviblindi_C_random_walk_adj_u", (DL_FUNC) &_tviblindi_C_random_walk_adj_u, 3},
    {"_tviblindi_relative_filtration", (DL_FUNC) &_tviblindi_relative_filtration, 3},
    {"_tviblindi_remove_back", (DL_FUNC) &_tviblindi_remove_back, 2},
    {"_tviblindi_remove_cycles_int_list", (DL_FUNC) &_tviblindi_remove_cycles_int_list, 2},
    {"_tviblindi_rips_from_spadj", (DL_FUNC) &_tviblindi_rips_from_spadj, 4},
    {"_tviblindi_C_sigma", (DL_FUNC) &_tviblindi_C_sigma, 4},
    {"_tviblindi_unique_simplex_inds", (DL_FUNC) &_tviblindi_unique_simplex_inds, 2},
    {"_tviblindi_reindex_cmplx", (DL_FUNC) &_tviblindi_reindex_cmplx, 2},
    {"_tviblindi_lowerbound_rb", (DL_FUNC) &_tviblindi_lowerbound_rb, 2},
    {"_tviblindi_path_1simplex_indices", (DL_FUNC) &_tviblindi_path_1simplex_indices, 2},
    {"_tviblindi_witness_from_points", (DL_FUNC) &_tviblindi_witness_from_points, 4},
    {"_tviblindi_witness_from_distances", (DL_FUNC) &_tviblindi_witness_from_distances, 4},
    {"_tviblindi_strong_witness_from_distances", (DL_FUNC) &_tviblindi_strong_witness_from_distances, 4},
    {"_tviblindi_witness_from_distances_cliques", (DL_FUNC) &_tviblindi_witness_from_distances_cliques, 4},
    {"_tviblindi_strong_witness_from_distances_cliques", (DL_FUNC) &_tviblindi_strong_witness_from_distances_cliques, 4},
    {"_tviblindi_internal_sample_points", (DL_FUNC) &_tviblindi_internal_sample_points, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_tviblindi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
