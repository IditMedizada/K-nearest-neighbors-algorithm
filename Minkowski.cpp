
#include "Minkowski.h"

/******************
* Function Name: minkowskiDistance
* Input: 2 vectors and an int for the pow
* Output: print the minkowski distance between the vectors
* Function Operation:calculating the euclidean distance between two vectors
* according to: D(X,Y)=(sum_{i=1}^{n} |x_{i} - y_{i}|^{p})^{\1/p}
* for elaboration: https://en.wikipedia.org/wiki/Minkowski_distance
* ******************/
double Minkowski::distance(vector<double> v1, vector<double> v2) {
    if (v1 == v2) { return 0; }
    if(v1.size() != v2.size()){ 
        return NULL;
    }
    ordinaryV = va.subtractVectors(v1, v2);
    ordinaryV = va.powVector(ordinaryV, 2);
    double sum = va.sumVector(ordinaryV);
    return sqrt(sum);
}