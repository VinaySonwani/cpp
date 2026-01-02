
// these only work on sorted data

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd( int i ) { return i % 2; }

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	if( binary_search(myvc.begin(), myvc.end(), 3))
		cout << "3 exist in the vector" << endl;
	else
		cout << "it does not" << endl;

	// finds first element equal or greater than the given
	cout << ( lower_bound(myvc.begin(), myvc.end(), 3 )) - myvc.begin() << endl;	

	// finds first element greater than the given
	cout << upper_bound(myvc.begin(), myvc.end(), 4 ) - myvc.begin() << endl;

	return 0;		
}


