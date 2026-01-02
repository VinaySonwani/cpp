
#include <cstring>
#include <iostream>
#include <assert.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
using namespace std;

int main()
{
	int client_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if( client_socket_fd == -1 ) assert( 0 );

	

	// Providing server address

	sockaddr_in serverAddress;
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_port = htons(8080);
	serverAddress.sin_addr.s_addr = INADDR_ANY;




	// sending connection request. If connect() returns zero, the client can engage in an algorithmic dialog with the server

	int returnValue = connect(client_socket_fd, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
	if ( returnValue == -1 ) assert( 0 );
	if ( returnValue == 0 )
	{
		// sending data
		const char* message = "Hello, server!";
		int sendCount = send(client_socket_fd, message, strlen(message), 0);
		if( sendCount > 0 )
		{
			cout << "Send successsful" << endl;
			// closing socket
			close(client_socket_fd);
		}

	}


	return 0;
}
