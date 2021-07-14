#include <mlpack/core.hpp>
#include <mlpack/methods/neighbor_search/neighbor_search.hpp>

using namespace std;
using namespace mlpack;
using namespace mlpack::neighbor;
using namespace mlpack::metric;


void mlModel () {
    //Load data
    arma::mat data;
    data::Load("data.csv", data, true);

    //Init NeighborSearch using ManhattanDistance
    NeighborSearch<NearestNeighborSort, ManhattanDistance> nn(data);

    //Init neightbors to store nearest neighbors

    nn.Search
    // https://www.mlpack.org/doc/stable/doxygen/sample.html

}