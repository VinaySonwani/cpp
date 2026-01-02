

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	cout << count(myvc.begin(), myvc.end(), 2) << endl;

	vector <string> myvc2 { "Ram", "Shyam", "Ghanshyam", "Ram" };
	cout << count( myvc2.begin(), myvc2.end(), "Ram" ) << endl;

	vector <int> myvc3 { 2,3,3,4,5,6};
	int c = count( myvc3.begin(), myvc3.end(), 3 );
	if( c )
		cout << "3 exists" << endl;
	else
		cout << "3 doesn't exist" << endl;
	
	
	return 0;		
}


