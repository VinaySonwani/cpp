

#include<iostream>
#include <vector>
#include <algorithm>
#include <functional>	// for greater 
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,2,3,4}, myvc2;
	myvc2 = myvc;
	
	// it maintains the order of equal elements than sort.
	stable_sort(myvc2.begin(), myvc2.end());

	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;

	// sorting in descending order
	stable_sort(myvc.begin(), myvc.end(), greater<int>());
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	

	return 0;		
}


