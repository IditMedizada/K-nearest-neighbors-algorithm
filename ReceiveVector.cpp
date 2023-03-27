
#include "ReceiveVector.h"

/******************
* Function Name: receiveVector
* Input: no input
* Output: returns a legal vector
* Function Operation: receive an input and transform it into a vector. 
* ******************/
vector<double> ReceiveVector::receiveVector() {
    string v;
    vector<double> vec;
    getline(cin, v);//receive the vector as a stream
    vec = transferStringToVector(v);
    return vec;
}

/******************
* Function Name: transferStringToVector
* Input: a string to be transferred into a vector
* Output: returns a legal vector
* Function Operation: receive a string and transform it into a vector. 
* ******************/
vector<double> ReceiveVector::transferStringToVector(string v) {
    double num;
    vector<double> vec;
    bool isLegal = checkVector(v);
    if (isLegal) {//if the stream is legal create the vector
        istringstream inputVectorStream(v);
        while (inputVectorStream >> num) {
            vec.push_back(num);
        }
        return vec;
    }
    return vec = static_cast<const vector<double>>(NULL);
}

/******************
* Function Name: checkVector
* Input: stream
* Output: returns true if the input of the vector is legal and false otherwise.
* Function Operation: receive an input and verify it's in the correct form of a vector. 
* ******************/
bool ReceiveVector::checkVector(string s) {
    int i = 0;
    if (s.length() == 0) {//if the input is empty return false.
        return false;
    }
    //check the first note (or the first number)
    if (s[i] == '-') {
        //if the note at the beginning of a new number is a minus move to check the next one.
        i++;
        if (!isdigit(s[i])) {//if after a minus there's non digit note return false.
            return false;
        }
    }
    while (isdigit(s[i])) {//while the note is a digit move to check the next one.
        i++;
    }
    if (s[i] == '.') {
        i++;
        if (!isdigit(s[i])) {
            return false;
        }
    }
    while (isdigit(s[i])) {//while the note is a digit move to check the next one.
        i++;
    }
    if (s[i] == 'E') {
        i++;
        if (s[i] == '-' || s[i] == '+') {
            i++;
            if (!isdigit(s[i])) {
                return false;
            }
        }
    }
    while (isdigit(s[i])) {//while the note is a digit move to check the next one.
        i++;
    }
    if (i == 0) {//the stream doesn't start with a legal note.
        return false;
    }
    //after confirming the first sequence we will check if the stream's format
    //is a space and then a legal number till the end of the stream and return false if it's not.
    while (i < s.length()) {
        if (s[i] == ' ') {//if the current note is a space continue to check the next one
            i++;
            if (i == s.length()) {//if the stream ends with a space (instead of a digit) return false.
                return false;
            }
            if (s[i] == '-') {
                //if the note at the beginning of a new number is a minus move to check the next one.
                i++;
                if (!isdigit(s[i])) {//if after a minus there's non digit note return false.
                    return false;
                }
            }
            while (isdigit(s[i])) {//while the note is a digit move to check the next one.
                i++;
            }
            if (s[i] == '.') {
                i++;
                if (!isdigit(s[i])) {
                    return false;
                }
            }
            while (isdigit(s[i])) {//while the note is a digit move to check the next one.
                i++;
            }
            if (s[i] == 'E') {
                i++;
                if (s[i] == '-' || s[i] == '+') {
                    i++;
                    if (!isdigit(s[i])) {
                        return false;
                    }
                }
            }
            while (isdigit(s[i])) {//while the note is a digit move to check the next one.
                i++;
            }
        } else { //there's an illegal note at the stream.
            return false;
        }
    }
    return true;
}