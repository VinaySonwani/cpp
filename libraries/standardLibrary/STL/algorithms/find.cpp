
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	auto it = find(myvc.begin(), myvc.end(), 4);

	if( it != myvc.end())
		cout << distance(myvc.begin(), it) << endl;
	else
		cout << "element not found" << endl;
	
	return 0;		
}


