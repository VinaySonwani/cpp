

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,4,3,2,4,3,3};
	vector <int> myvc2 { 10,40,30,20,40,30};
	
	swap( myvc, myvc2 );

	for( auto i : myvc )
		cout << i << " ";
	cout << endl;


	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;

	// works with almost all the data types. works even when there is a difference in the sizes.

	return 0;		
}


