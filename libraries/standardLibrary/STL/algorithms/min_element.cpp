

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector<int> myvc = { 5, 3, 4, 1, 2, 7, 3 };
    	cout << *min_element(myvc.begin( ), myvc.end( ) ) << endl;

	// Finding the minimum element in array
	int arr[] = {33, 87, 1, 71};
    	int n = sizeof(arr) / sizeof(arr[0]);
  	cout << *min_element(arr, arr + n);

	// Finding Minimum Element in Deque with Multiple Minimums
	deque<int> d = {33, 1, 87, 1, 71, 1};
    	auto min = min_element(d.begin(), d.end());
  	cout << "Index: " << distance(d.begin(), min);
		
	return 0;		
}

/* min_element implements a linear search algorithm to find the smallest element in the range. */





