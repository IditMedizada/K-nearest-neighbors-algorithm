
#ifndef RECEIVEVECTOR_H_
#define RECEIVEVECTOR_H_

#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <sstream>
#include <cstring>

using namespace std;

class ReceiveVector {
public:
    vector<double> receiveVector();

    vector<double> transferStringToVector(string v);

    bool checkVector(string s);
};

#endif