
#ifndef MANHATTANDISTANCE_H_
#define MANHATTANDISTANCE_H_

#include "Distance.h"
#include <vector>

using namespace std;

class ManhattanDistance : public Distance {
    double distance(vector<double> v1, vector<double> v2) override;
};

#endif
