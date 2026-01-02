
// can use equal_range instead of this.

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector <int> myvc{ 1, 2, 3, 4, 5, 6, 7, 8};
	
	cout << *lower_bound( myvc.begin( ), myvc.end( ), 3.5 ) << endl;


	// find the existence if an element in a vector
	vector<int> v = {10, 20, 30, 40, 50};
    	int val = 40;
    	auto it = lower_bound(v.begin(), v.end(), val);
    	if (*it == val)
        	cout << val << " is found" << endl;
    	else
        	cout << val << " is NOT found" << endl;


	// Find the Number of Smaller and Larger Elements than a Value in Vector
	vector<int> v2 = {10, 20, 30, 40, 50};
    	int val2 = 35;

    	auto lb = lower_bound(v2.begin(), v2.end(), val2);

    	cout << "No. of Smaller Elements: " << lb - v2.begin() << endl;

    	cout << "No. of Larger Elements: " << v2.size() - (lb - v2.begin()) << endl;


	// Insert an Element in a Sorted Vector
	vector<int> v3 = {10, 20, 30, 40, 50};
    	int val3 = 35;

    	auto lb3 = lower_bound(v3.begin(), v3.end(), val3);

    	v3.insert(lb3, val3);

    	for (auto i : v3)
        	cout << i << " ";
	cout << endl;


	return 0;		
}

/* works with all sorted container. */




