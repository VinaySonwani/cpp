//// Client.cpp : Defines the entry point for the console application.


#include "stdafx.h"

#include<iostream>
#include<WinSock2.h>          // header to use sockets in windows.
using namespace std;

#pragma comment(lib, "Ws2_32.lib")          // winsock library to be used.


int _tmain(int argc, _TCHAR* argv[])
{
	// CHECKING VERSION.

	WSAData version;          // WSAData is a structure that consist windows socket implementation.
	WORD mkword = MAKEWORD(2,2);          // MAKEWORD is a macro.
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

	SOCKET c_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);   // "SOCKET" is a structure used to hold the socket and "socket" is a fn to create the socket.
	if(c_sock == INVALID_SOCKET)
	{
		cout << "CREATION OF SOCKET FAILED \n" << endl;
	}
	else
	{
		cout << "SOCKET WAS SUCCESSFULLY CREATED \n" << endl;
	}


	//  PROVIDING SERVER ADDRESS INFORMATION.

	sockaddr_in addr;      // sockaddr is a structure used to hold address information of server.
	addr.sin_family = AF_INET;     // structure variable specifying IP version.
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");     // s.v.s. IP address of server.
	addr.sin_port = htons(80);       // s.v.s. port no. of server.


	// CONNECTION REQUEST CREATION.

	int conn = connect(c_sock,(SOCKADDR*)&addr,sizeof(addr)); // connect fn passing client's socket, server address information and total size of s.a.i.
	if(conn == SOCKET_ERROR) // if connect fn fails, it returns "SOCKET_ERROR".
	{
		cout << "ERROR WHILE CONNECTING \n" << endl << WSAGetLastError() << "\n" << endl;
		closesocket(c_sock); // closing the socket.
		WSACleanup();  // closing winsock system.
	}


	//   SENDING MSG TO SERVER.

	char *mymsg = "Hi, I'm from client";          
	int smsg = send(c_sock,mymsg,(int)strlen(mymsg),0);          // send fn passing client's socket, msg, total length of msg and the flag.
	if(smsg == SOCKET_ERROR)              
	{
		cout << "ERROR IN SEND \n" << endl << WSAGetLastError() << "\n" << endl;
		WSACleanup();
	}


	// RECEIVING MSG FROM SERVER.
	char vect[512] = { 0 };
	int get = recv(c_sock,vect,512,0);    // receive fn passing client's socket, vect array to store the incoming msg, size of vect array and the flag.
	if(get == SOCKET_ERROR)          
	{
		cout << "ERROR IN RECEIVE \n" << endl << WSAGetLastError() << "\n" << endl;
	}
	cout << vect << endl;    // printing received msg from server.
	closesocket(c_sock);     

	return 0;
}