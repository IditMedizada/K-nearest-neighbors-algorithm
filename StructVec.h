
#ifndef STRUCTVEC_H_
#define STRUCTVEC_H_

#include<vector>
#include<string>
#include "Distance.h"

using namespace std;

class StructVec {
private:
    vector<double> vec;
    string name="name";
    double distance;
public:
    StructVec(vector<double> vec1, string name1);
    explicit StructVec(vector<double> vec1);
    vector<double> getVector();
    string getName() const;
    double getDistance() const;
    void setDistance(double dist);
    void setName(string name1);
};

#endif 
