// can use equal_range instead of this.

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector <int> myvc{ 1, 2, 3, 4, 5, 6, 7, 8};
	
	cout << *upper_bound( myvc.begin( ), myvc.end( ), 4 ) << endl;

	
	// finding the larger elements than a value
	vector<int> v2 = {11, 34, 56, 67, 89};
  	int val = 50;
  
  	auto up = upper_bound(v2.begin(), v2.end(), val);
  
  	cout << "No. of Larger Elements: " << v2.end() - up << endl;

	
	return 0;		
}





