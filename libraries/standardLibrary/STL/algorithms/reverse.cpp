

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};

	reverse(myvc.begin(), myvc.end() );
	
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	

	int arr[] = { 10, 20, 30, 40 };
        int n = sizeof(arr) / sizeof(arr[0]);
	
	reverse(arr, arr+n);	

	for( auto i : arr )
		cout << i << " ";
	cout << endl;



	string mystrng { "temp" };
	
	reverse(mystrng.begin(), mystrng.end());
	
	cout << mystrng << endl;



	// left rotating a vector
	vector<int> v = {1, 3, 6, 2, 9};
    int n = v.size();
    int d = 2;

    // Left rotate the vector by d place
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());

    for (auto i : v)
        cout << i << " ";

	

	return 0;		
}


