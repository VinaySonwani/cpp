

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	vector<int> myvc2(5);

	// desc
	copy(myvc.begin(), myvc.begin()+2, myvc2.begin() );
	for ( auto i : myvc2)
		cout << i << endl;

	// copy range
	// desc
	vector <int> myvc3(5);
	copy_n( myvc.begin(), 4, myvc3.begin() );
	for ( auto i : myvc3 )
		cout << i << endl;

	return 0;		
}


