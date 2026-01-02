

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};
	
	vector<int> myvc2 ( myvc.size( ) );

	transform( myvc.begin( ), myvc.end( ), myvc2.begin( ), [ ] ( int a ) {
													return ++a; } );

	for ( auto i : myvc2)
		cout << i << endl;


	
	string s = "HAIWA";
	transform(s.begin(), s.end(), s.begin(), 
              [](char c) {
                  return tolower(c);
             });

        cout << s << endl;


	
	vector<int> v1 = {6, 7, 8, 9, 10};
	vector<int> v2 = {1, 4, 8, 9, 43};
        vector<int> v(v1.size());

        transform(v1.begin(), v1.end(), v2.begin(),
              v.begin(),
              [](int a, int b) { 
                return a + b; 
              });

      for (auto i : v)
      	cout << i << endl;

	return 0;		
}


