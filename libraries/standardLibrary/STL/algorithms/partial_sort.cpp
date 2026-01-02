
// Related to sort with range.

#include<iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,5,3,2,4};

	partial_sort(myvc.begin(), myvc.begin() + 3, myvc.end());

	for( auto i : myvc )
		cout << i << " ";
	cout << endl;


	
	vector <int> myvc2 { 1,5,3,2,4};

	partial_sort(myvc2.begin(), myvc2.begin() + 3, myvc2.end(), [ ] (int i, int j) { return i <j;} );

	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;


	// finding the largest element
	vector<int> v = { 10, 45, 60, 78, 23, 21, 30 };
	vector<int>::iterator ip;
	std::partial_sort(v.begin(), v.begin() + 1, v.end(),
                      greater<int>());
	ip = v.begin();
    	cout << "The largest element is = " << *ip << endl;




	vector<int> v2 = { 10, 45, 60, 78, 23, 21, 3 };
    	vector<int>::iterator ip2;
    	std::partial_sort(v2.begin(), v2.begin() + 1, v2.end());

    	ip2 = v2.begin();
    	cout << "The smallest element is = " << *ip2 << endl;

	return 0;		
}


