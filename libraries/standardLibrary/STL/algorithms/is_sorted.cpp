

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,2,3,4};
	
	// ascending
	if( is_sorted(myvc.begin(), myvc.end()) )
		cout << "sorted" << endl;
	else
		cout << "not" << endl;


	// descending
	vector < int > myvc2 { 7,5,3,1 };
	if( is_sorted(myvc2.begin(), myvc2.end(), [ ] (int i, int j) { return i > j; }) )
		cout << "sorted" << endl;
	else
		cout << "not" << endl;
	

	return 0;		
}


