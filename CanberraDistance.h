

#ifndef CANBERRADISTANCE_H_
#define CANBERRADISTANCE_H_
#include "Distance.h"
#include <vector>

using namespace std;

class CanberraDistance: public Distance {
public:
    double distance(vector<double> v1, vector<double> v2) override;
};
#endif
