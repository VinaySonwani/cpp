

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector<int> myvc = { 5, 3, 4, 1, 2, 7, 3 };
    	cout << *max_element(myvc.begin( ), myvc.end( ) ) << endl;

	// Finding the maximum element in array
	int arr[] = {33, 87, 1, 71};
    	int n = sizeof(arr) / sizeof(arr[0]);
  	cout << *max_element(arr, arr + n) << endl;


	// Finding Element Having Maximum Remainder After Division with 5
	vector<int> v = {33, 87, 1, 71};
    	cout << *max_element(v.begin(), v.end(), [ ] ( int a, int b ) { return a % 5 < b % 5; } ) << endl; 
		
	return 0;		
}

/* max_element implements a linear search algorithm to find the largest element in the range. */





