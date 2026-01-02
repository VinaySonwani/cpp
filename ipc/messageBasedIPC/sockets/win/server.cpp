
#include<iostream>
#include<WinSock2.h>          // header to use sockets in windows.
using namespace std;

#pragma comment(lib, "Ws2_32.lib")          // winsock library to be used.


int main()
{
	// CHECKING VERSION.

	WSAData version;          // WSAData is a structure that consist windows socket implementation.
	WORD mkword = MAKEWORD(2,2);          // MAKEWORD is a micro.
	int what = WSAStartup(mkword,&version);     // WSAStartup is a fn that verifies version of windows socket implementation.
	if(what !=0)
	{
		cout << "THIS VERSION IS NOT SUPPORTED \n" << WSAGetLastError() << endl;
	}
	else
	{
		cout << "EVERYTHING IS FINE \n" << endl;
	}



	// CREATING SOCKET.

	SOCKET s_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);   // "SOCKET" is a structure used to hold the socket and "socket" is a fn to create the socket.
	if(s_sock == INVALID_SOCKET)
	{
		cout << "CREATION OF SOCKET FAILED \n" << endl;
	}
	else
	{
		cout << "SOCKET WAS SUCCESSFULLY CREATED \n" << endl;
	}



	//  CONSTRUCTING SERVER ADDRESS INFORMATION.

	sockaddr_in addr;      // sockaddr is a structure used to hold address information of server.
	addr.sin_family = AF_INET;     // structure variable specifying IP version.
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");     // s.v.s. IP address of server.
	addr.sin_port = htons(80);       // s.v.s. port no. of server.



	// BINDING SOCKET.

	int bnd = bind(s_sock,(SOCKADDR*)&addr,sizeof(addr));
	if(bnd == SOCKET_ERROR)
	{
		cout << "BINDING FAILED \n" << endl << WSAGetLastError () << "\n" << endl;
		closesocket(s_sock); // closing the socket.
		WSACleanup();
	}



	// LISTENING ON PORT FOR CONNECTION.
	
	int lstn = listen(s_sock,SOMAXCONN);
	if(lstn == SOCKET_ERROR)
	{
		cout << "ERROR WHILE LISTENING \n" << endl << WSAGetLastError() << "\n" << endl;
		closesocket(s_sock); 
		WSACleanup();
	}



	// ACCEPTING INCOMING CONNECTION.

	SOCKET accpt;
	accpt = accept(s_sock,(SOCKADDR*)&addr,NULL);
	if(accpt == INVALID_SOCKET)
	{
		cout << "ERROR WHILE ACCEPTING THE CONNECTION \n" << endl << WSAGetLastError() << "\n" << endl;
		closesocket(s_sock); 
		WSACleanup();
	}
	else
	{
		cout << "CLIENT IS CONNECTED \n" << endl;
	}



	//   SENDING MSG TO CLIENT.

	char *mymsg = "Hi, I'm from server";                
	int smsg = send(accpt,mymsg,(int)strlen(mymsg),0);          // send fn passing server's socket, msg, total length of msg and the flag.
	if(smsg == SOCKET_ERROR)              
	{
		cout << "ERROR IN SEND \n" << endl << WSAGetLastError() << "\n" << endl;
		WSACleanup();
	}



	// RECEIVING MSG FROM CLIENT.
	char vect[512] = { 0 };
	int get = recv(accpt,vect,512,0);    // receive fn passing server's socket, vect array to store the incoming msg, size of vect array and the flag.
	if(get == SOCKET_ERROR)          
	{
		cout << "ERROR IN RECEIVE \n" << endl << WSAGetLastError() << "\n" << endl;
	}
	cout << vect << endl;    // printing received msg from client.
	closesocket(s_sock);    

	return 0;
}