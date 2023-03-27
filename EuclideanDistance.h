

#ifndef EUCLIDEANDISTANCE_H_
#define EUCLIDEANDISTANCE_H_

#include "Minkowski.h"
#include <vector>

using namespace std;

class EuclideanDistance : public Distance {
    double distance(vector<double> v1, vector<double> v2) override;
};

#endif