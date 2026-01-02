

#include<iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main( )
{
	vector <int> myvc { 1,2,3,4,5};

	// left rotate
	rotate(myvc.begin(), myvc.begin() + 2, myvc.end() );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	// right rotate
	vector <int> myvc2 { 10,20,30,40,50};
	rotate(myvc2.begin(), (myvc2.end()  - 2), myvc2.end() );
	for( auto i : myvc2 )
		cout << i << " ";
	cout << endl;


	
	list<int> l = {1, 2, 3, 4, 5};

    // Rotate l to places to the Left
    rotate(l.begin(), next(l.begin(), 2), l.end());

    for (int i : l) cout << i << " ";
    cout << endl;

	return 0;		
}


