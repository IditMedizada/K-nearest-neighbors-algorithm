
#ifndef VECTORARITHMETIC_H_
#define VECTORARITHMETIC_H_

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class VectorArithmetic {
public:
    vector<double> addVectors(vector<double> vector1, vector<double> vector2);

    vector<double> subtractVectors(vector<double> vector1, vector<double> vector2);

    vector<double> powVector(vector<double> vector, int power);

    double sumVector(vector<double> vector);

    vector<double> absoluteValueVector(vector<double> vector);

    double maxValueVector(vector<double> vector);

    vector<double> divisionVectors(vector<double> vector1, vector<double> vector2);

};

#endif
