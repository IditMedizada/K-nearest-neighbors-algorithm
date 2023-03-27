
#ifndef CLIENT_DEFAULTIO_H
#define CLIENT_DEFAULTIO_H
#include <string>
using namespace std;


class DefaultIO {
public:
    virtual string read() const;
    virtual void write (string) const;
    ~DefaultIO();
};


#endif
