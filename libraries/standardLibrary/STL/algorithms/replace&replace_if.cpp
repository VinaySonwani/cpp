

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};

	replace(myvc.begin( ), myvc.end( ), 3, 7 );

	replace_if(myvc.begin(), myvc.end(), [ ] (int i) { return i%2 == 0; }, 9 );

	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	

	int arr[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
        int n = sizeof(arr) / sizeof(arr[0]);
	replace(arr, arr + n, 20, 55);
	for( auto i : arr )
		cout << i << " ";
	cout << endl;

	

	return 0;		
}


