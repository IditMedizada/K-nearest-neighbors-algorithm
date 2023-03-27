
#include "SocketIO.h"

/******************
* Function Name: SocketIO
* Input: int socket
* Output: no output
* Function Operation: constructor.
* ******************/
SocketIO:: SocketIO(int socket): clientSocket(socket){}

/******************
* Function Name: read
* Input: no input
* Output: a string
* Function Operation: receive a string through a socket.
* ******************/
string SocketIO:: read() const {
    char buffer[4096];
    int expected_data_len = sizeof(buffer);
    memset(buffer,0,sizeof (buffer));
    int read_bytes = recv(clientSocket, buffer, expected_data_len, 0);
    send(clientSocket, buffer, 1, 0);

    if (read_bytes == 0) {
    // connection is closed
    } else if (read_bytes < 0) {
        perror("error reading data");
    }
    return string(buffer);
}

/******************
* Function Name: write
* Input: a string
* Output: no output
* Function Operation: send a string through a socket.
* ******************/
void SocketIO:: write(string s) const {

    char buffer[4096];
    memset(buffer,0,sizeof (buffer));
    char *data_addr = new char[s.length() + 1];
    strcpy(data_addr, s.c_str());
    int data_len = strlen(data_addr);
    int sent_bytes = send(clientSocket, data_addr, data_len, 0);
    recv(clientSocket, data_addr, 1, 0);

    if (sent_bytes < 0) {
        perror("error sending to client");
    }
}
