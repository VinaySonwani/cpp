

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};

	auto rm = remove(myvc.begin( ), myvc.end( ), 3 );
	myvc.erase(rm, myvc.end( ));

	for( auto i : myvc )
		cout << i << endl;




	int arr[] = {1, 2, 3, 4, 5, 6, 7, 3, 8};
    	int s = sizeof(arr) / sizeof(arr[0]);

    	// Use std::remove to shift all occurences of 3
  	// to the front
   	 int *ne = remove(arr, arr + s, 3);

    	// Calculate the new size after removal
   	 int ns = ne - arr;
    	for (int i = 0; i < ns; i++)
        	cout << arr[i] << " ";



	vector <int> myvc2 { 1,2,3,4,5};
	auto ne = remove_if(myvc2.begin(), myvc2.end(),
                        [](int x) {
                          return x % 2 == 0;
                        });
    	myvc2.erase(ne, myvc2 end());
	for( auto i : myvc2 )
		cout << i << endl;

	return 0;		
}


