

#include <string>
#include "DefaultIO.h"

/******************
* Function Name: read
* Input: no input
* Output: a string
* Function Operation: receive a string through a socket.
* ******************/
string DefaultIO::read() const{};

/******************
* Function Name: write
* Input: a string
* Output: no output
* Function Operation: send a string through a socket.
* ******************/
void DefaultIO::write(string) const{}

/**
 * destructor.
 **/
DefaultIO::~DefaultIO() {}
