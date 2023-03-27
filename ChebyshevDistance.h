

#ifndef CHEBYSHEVDISTANCE_H_
#define CHEBYSHEVDISTANCE_H_

#include "Distance.h"
#include <vector>

using namespace std;

class ChebyshevDistance : public Distance {
    double distance(vector<double> v1, vector<double> v2) override;
};

#endif
