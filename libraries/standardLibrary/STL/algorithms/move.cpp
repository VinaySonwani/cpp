

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	vector<int> myvc2 { 7,7,7,7,7 };

	move(myvc.begin(), myvc.begin()+3, myvc2.begin()+1 );
	for ( auto i : myvc2)
		cout << i << endl;

	return 0;		
}


