
// sort such that nth element comes where it should belong ?

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector <int> myvc{ 10, 20, 9, 3, 50, 4, 6, 70, 8, 1};
	int n = 6;

	//desc
	nth_element(myvc.begin(), myvc.begin() + n, myvc.end() );

	for( auto i : myvc )
		cout << i << " ";
	cout << endl;



	vector <int> myvc2{ 10, 20, 9, 3, 50, 4, 6, 70, 8, 1};
	nth_element(myvc.begin(), myvc.begin() + 6, myvc.end(), [ ] ( int i, int j ) { return i > j; } );
	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;


	// finding first smallest n numbers
	int v[] = { 30, 20, 10, 40, 60, 50, 70, 80 }, i;

   	// Using std::nth_element with n as 3
    	std::nth_element(v, v + 2, v + 8);

    	// Since, n is 3 so now first three numbers will be the
    	// three smallest numbers in the whole array
    	// Displaying first three smallest number
    	for (i = 0; i < 3; ++i) {
        	cout << v[i] << " ";
    }	


	// first n largest
	int v1[] = { 30, 20, 50, 60, 70, 10, 80, 40 };
	// Using std::nth_element with n as 2
    	std::nth_element(v1, v1 + 1, v1 + 8, std::greater<int>());

    	// Since, n is 2 so first 2 elements will be the largest
    	// among all the array elements
    	// Displaying First 2 elements
    	for (int i = 0; i < 2; ++i) {
        	cout << v1[i] << " ";
    	}

	

	// finding median
	vector<int> v2 = { 3, 2, 10, 45, 33, 56, 23, 47, 60 };

    	// Using std::nth_element with n as v.size()/2 + 1
    	std::nth_element(v2.begin(), v2.begin() + v2.size() / 2,
                     v2.end());

   	 cout << "The median of the array is "
         << v2[v2.size() / 2];


	return 0;		
}


/* The std::nth_element algorithm is implemented using a hybrid approach called "Introselect." This technique combines the efficiency of both Quickselect and the Median of Medians algorithm. */


