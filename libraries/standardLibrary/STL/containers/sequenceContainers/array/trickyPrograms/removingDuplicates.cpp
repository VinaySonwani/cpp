
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int arr[ ] = {1,2,3,3,4,5,6,4,5};
	
	unordered_set <int> uset;

	for( auto i : arr )
		uset.insert( i );

	//int n = sizeof(arr) / sizeof(arr[0]);
	//for(int i = (n-1); i <=0; i--)		// trying to maintain order but not working, check why.
		//uset.insert( arr[i] );

	for( auto i : uset)
		cout << i << endl;

	return 0;
}

/*

	// convert it for array

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	string str = "cbcba";
	unordered_set<char> ust;

	int size = str.size();
	for(int i = (size-1); i >=0; i--)
		ust.insert(str[i]);

	for( auto i : ust )
		cout << i << "\t" ;
	cout << endl;

	return 0;
}

*/
