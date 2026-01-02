
#include <cstring>
#include <iostream>
#include <assert.h>
#include <netinet/in.h>		// It defines sockaddr_in structure that includes sin_family, AF_INET, sin_port, struct in_addr,  sin_addr member variables.
#include <sys/socket.h>		// It defines the sockaddr structure. It also defines SOCK_STREAM macro.
#include <unistd.h>			// defines miscellaneous symbolic constants and types, and declares miscellaneous functions
using namespace std;

int main()
{
	// Both the server and the client must instantiate a socket object by executing the socket() system call.

	int server_socket_fd = socket(AF_INET, SOCK_STREAM, 0); 
	if ( server_socket_fd == -1 ) assert( 0 );							// int socket( int domain, int type, int protocol );
															// AF_INET: Between two hosts via the IPv4 protocol by using the constant AF_INET

															// SOCK_STREAM: will create a stream socket. A stream socket provides a reliable, bidirectional, and 															// connection-oriented communication channel between two processes. For internet domain sockets, 
															// data is carried using the Transmission Control Protocol (TCP).

															// The protocol parameter should be set to zero,[2] except for raw sockets, where the protocol 
															// parameter should be set to IPPROTO_RAW.

															// socket() function shall create an unbound socket in a communications domain, and return a file 																// descriptor that can be used in later function calls that operate on sockets. A file descriptor is a 
															// unique identifier or reference (non -ve integer) that the operating system assigns to a file when it is 															// opened. It allows programs to interact with files, sockets, or other input/output (I/O) resources. The 
															// file descriptor is used by the operating system to keep track of the file and perform operations on it.




	// Creating the server address. Because the socket address may be either a /path/filename or an IP_address:Port_number, the socket application programming 	
	// interface requires the address to first be set into a structure.

	sockaddr_in serverAddress;							// For an Internet domain socket, the suffix will be either _in or _in6
	serverAddress.sin_family = AF_INET;					// sin stands for 'socket internet'.
	serverAddress.sin_port = htons(8080);					// htons() function makes sure that numbers are stored in memory in network byte order, which is 
													// with the most significant byte first.
	serverAddress.sin_addr.s_addr = INADDR_ANY;			// INADDR_ANY is any constant that equals to zero.




	// Binding the server socket to the server address.

	int returnValue = ::bind(server_socket_fd, (struct sockaddr*)&serverAddress, sizeof(serverAddress));			// mind the :: before bind.
	if ( returnValue == -1 ) assert( 0 );					// If socket_address exists on the filesystem, then bind will fail. The second parameter for bind() is a pointer to struct 												// sockaddr. However, the parameter passed to the function is the address of a struct sockaddr_in. struct sockaddr is 												// a generic structure that is not used. It is defined in the formal parameter declaration for bind(). Because each 													// range of communication has its own actual parameter, this generic structure was created as a cast placeholder.


	// After binding to an address, the server opens a listen channel to a port by executing listen(). For a Unix domain socket, listen() most likely will succeed and return 0. For 		// an Internet domain socket, if the port is in use, listen() returns -1

	int listenValue = listen(server_socket_fd, 5);	
	if ( listenValue == -1 ) assert( 0 );					// int listen( int server_socket_fd, int backlog ). The backlog parameter sets the queue size for pending connections.													// The server may be busy when a client executes a connect() request. Connection requests up to this limit will 														// succeed. If the backlog value passed in exceeds the default maximum, then the maximum value is used.



	// After opening a listen channel, the server enters an infinite loop. Inside the loop is a system call to accept(), which puts itself to sleep. The accept() system call will
	// return a file descriptor when a client process executes connect().

	while( 1 )														
	{															
    		int accept_socket_fd = accept(server_socket_fd, nullptr, nullptr);		// The accept() function shall extract the first connection on the queue of pending connections, 																	
		if ( accept_socket_fd == -1 ) assert( 0 );							// create a new socket with the same socket type protocol and address family as the specified 
																// socket, and allocate a new file descriptor for that socket.

		// When accept() returns a positive integer, the server engages in an algorithmic dialog with the client. Stream socket input/output may execute the regular-file system 
    		// calls of read() and write().[6] However, more control is available if a stream socket executes the socket-specific system calls of send() and recv(). Alternatively, 
    		// datagram socket input/output should execute the socket-specific system calls of sendto() and recvfrom(). For a basic stream socket, the server receives data with 
    		// read( accept_socket_fd ) and sends data with write( accept_socket_fd ).

		if ( accept_socket_fd > 0 )
		{
			char buffer[1024] = { 0 };
			int recvCount = recv(accept_socket_fd, buffer, sizeof(buffer), 0);
			if( recvCount > 0 )
			{
				cout << "Message from client: " << buffer << endl;

				// The algorithmic dialog ends when either the algorithm concludes. To close the connection, execute the close() system call.
    				close(accept_socket_fd);
			}
		}
	}		


	return 0;
}









