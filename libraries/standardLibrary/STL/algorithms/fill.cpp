

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};

	fill( myvc.begin( ) + 1, myvc.end( ) -1, 8 );

	for( auto i : myvc )
		cout << i << endl;

	return 0;		
}


