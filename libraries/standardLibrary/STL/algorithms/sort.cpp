

#include<iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

int main( )
{
	// sorting entire range
	vector <int> myvc { 1,5,3,2,4};
	sort(myvc.begin(), myvc.end());
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;


	// sorting custom range
	vector <int> myvc2 { 1,5,3,2,4};
	sort(myvc2.begin()+2, myvc2.end());
	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;


	
	// sorting in descending order
	vector <int> myvc3 { 1,5,3,2,4};
	sort(myvc3.begin(), myvc3.end(), greater<int>());
	for( auto i : myvc3 )
		cout << i << " ";
	cout << endl;

	return 0;		
}


