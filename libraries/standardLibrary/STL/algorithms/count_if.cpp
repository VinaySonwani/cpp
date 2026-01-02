

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd( int i ) { return i % 2; }

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	int noOdd = count_if(myvc.begin(), myvc.end(), isOdd);

	cout << "total no of odd elements are: " << noOdd << endl;

	return 0;		
}


