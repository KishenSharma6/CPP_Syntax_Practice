#include <mlpack/core.hpp>
#include <mlpack/methods/neighbor_search/neighbor_search.hpp>

using namespace std;
using namespace mlpack;
using namespace mlpack::neighbor;
using namespace mlpack::metric;


int main () {
    //Load data
    arma::mat data;
    data::Load("data.csv", data, true);

    //Init NeighborSearch using ManhattanDistance
    NeighborSearch<NearestNeighborSort, ManhattanDistance> nn(data);

    //Init neightbors to store nearest neighbors
    arma::Mat<size_t> neighbors;
    
    //Init distances object to store distances
    arma::mat distances;

    //Compute neighbors
    nn.Search(1, neighbors, distances);
    
    for (size_t i = 0; i< neighbors.n_elen; ++i) {
        std:cout << "Nearest neighbor of point " << i << " is point " << neighbors[i] <<
        " and the distance is " <<distances[i] << ".\n";
    }
    return 0
}