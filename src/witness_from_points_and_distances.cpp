// #include <gudhi/Simplex_tree.h>
// #include <gudhi/Euclidean_witness_complex.h>
// #include <gudhi/pick_n_random_points.h>
// #include <gudhi/Points_off_io.h>
// #include <CGAL/Epick_d.h>
// #include <string>
// #include <vector>

#include <gudhi/Alpha_complex.h>
// to construct a simplex_tree from alpha complex
#include <gudhi/Simplex_tree.h>
#include <gudhi/Euclidean_witness_complex.h>
#include <CGAL/Epick_d.h>
#include <iostream>
#include <string>
#include <vector>
#include <limits>  // for numeric limits

#include <Rcpp.h>
using namespace Rcpp;
//using SimplexTree = Gudhi::Simplex_tree<>;

// typedef CGAL::Epick_d<CGAL::Dynamic_dimension_tag> K;
// typedef typename K::Point_d Point_d;
// typedef typename Gudhi::witness_complex::Euclidean_witness_complex<K> Witness_complex;
// //typedef std::vector< Vertex_handle > typeVectorVertex;
// typedef std::vector< Point_d > Point_vector;



using Kernel = CGAL::Epick_d<CGAL::Dynamic_dimension_tag>;
//using Kernel = CGAL::Epick_d< CGAL::Dimension_tag<3> >;
using Point = Kernel::Point_d;
using Vector_of_points = std::vector<Point>;
using Witness_complex = Gudhi::witness_complex::Euclidean_witness_complex<Kernel>;


using Nearest_landmark_range = std::vector<std::pair<std::size_t, double>>;
using Nearest_landmark_table = std::vector<Nearest_landmark_range>;
using Witness_complexD = Gudhi::witness_complex::Witness_complex<Nearest_landmark_table>;

// [[Rcpp::export]]

SEXP witness_from_points(const Rcpp::NumericMatrix landmarksin, const Rcpp::NumericMatrix ws, double alpha2, unsigned int limd=2){
  
  Vector_of_points ws_vector, landmarks_vector;
  const unsigned rowNum = landmarksin.nrow();
  const unsigned colNum = landmarksin.ncol();
  const unsigned wNum = ws.nrow();
  std::vector< double > pointD(colNum);
  
  for (unsigned rowIdx = 0; rowIdx < rowNum; ++rowIdx) {
    for (unsigned colIdx = 0; colIdx < colNum; ++colIdx) {
      pointD[colIdx] = landmarksin[rowIdx + colIdx * rowNum];
    }
    landmarks_vector.push_back(
                               Point(pointD.size(), pointD.begin(), pointD.end()));
  }
  
  for (unsigned rowIdx = 0; rowIdx < wNum; ++rowIdx) {
    for (unsigned colIdx = 0; colIdx < colNum; ++colIdx) {
      pointD[colIdx] = ws[rowIdx + colIdx * wNum];
    }
    ws_vector.push_back(
                               Point(pointD.size(), pointD.begin(), pointD.end()));
  }
  
  Gudhi::Simplex_tree<> stree;
  Witness_complex witness_complex(landmarks_vector, ws_vector);
  witness_complex.create_complex(stree,alpha2, limd);
  stree.initialize_filtration();

  std::vector<std::vector<int>> out;
  std::vector<double> out_values;

  for (auto f_simplex : stree.filtration_simplex_range()) {
   
    std::vector<int> out_loc;
    for (auto vertex : stree.simplex_vertex_range(f_simplex)) {
     
      out_loc.push_back(vertex+1); //R is 1-based
     
    }
    out.push_back(out_loc);
    out_values.push_back(stree.filtration(f_simplex));
    
  }

   
  return Rcpp::List::create(Rcpp::Named("cmplx", out), Rcpp::Named("values", out_values));
  
}

// [[Rcpp::export]]

SEXP witness_from_distances(const Rcpp::List IND, const Rcpp::List DIST,double alpha2, unsigned int limd=2){
  
  Vector_of_points ws_vector, landmarks_vector;
  const unsigned LN = IND.size();
  Nearest_landmark_table nlt;  

  for (unsigned Idx = 0; Idx < LN; ++Idx) {
    std::vector<unsigned int> iIND=IND[Idx];
    std::vector<double> iDIST=DIST[Idx];
    Nearest_landmark_range w0;
    for (unsigned Jdx = 0; Jdx <iIND.size() ; ++Jdx) {
      w0.push_back(std::make_pair(iIND[Jdx],iDIST[Jdx]));
    }
    nlt.push_back(w0);
  }
  
  
  Gudhi::Simplex_tree<> stree;
  Witness_complexD witness_complex(nlt);
  witness_complex.create_complex(stree,alpha2, limd);
  stree.initialize_filtration();

  std::vector<std::vector<int>> out;
  std::vector<double> out_values;

  for (auto f_simplex : stree.filtration_simplex_range()) {
   
    std::vector<int> out_loc;
    for (auto vertex : stree.simplex_vertex_range(f_simplex)) {
     
      out_loc.push_back(vertex+1); //R is 1-based
     
    }
    out.push_back(out_loc);
    out_values.push_back(stree.filtration(f_simplex));
    
  }

   
  return Rcpp::List::create(Rcpp::Named("cmplx", out), Rcpp::Named("values", out_values));
  
}
