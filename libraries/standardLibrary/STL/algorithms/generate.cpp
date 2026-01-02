

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gen( )
{
	static int i = 0;
	return ++i;
}

int main( )
{
	vector <int> myvc( 10 );

	generate(myvc.begin(), myvc.end(), gen);

	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	return 0;		
}


