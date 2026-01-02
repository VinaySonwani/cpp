

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd( int i ) { return i % 2; }

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	auto it = find_if(myvc.begin(), myvc.end(), isOdd);
	cout << *it << endl;

	auto it2 = find_if_not( myvc.begin(), myvc.end(), isOdd );
	cout << *it2 << endl;
	
	return 0;		
}


