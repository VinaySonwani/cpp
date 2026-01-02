
// Storing lambda in a variable for later use.

#include <iostream>
#include <functional>		// for std::function
using namespace std;

int main( )
{
	// Method- 1, using auto keyword as the lambda variable type. It's the preferred method.
	auto myLambda1{
					[ ] ( int a ) {
								return ++a;
							}
				};


	cout << myLambda1( 4 ) << endl;

	// Method- 2, using a regular function pointer as the lambda variable type. Works when capture clause is empty.
	int (*myLambda2) ( int b ){
							[ ] ( int c ){
										return ++c;
									}
						};

	cout << myLambda2( 5 ) << endl;

	// Method- 3, using std::function as the lambda variable type. pre-C++17, use std::function<'data type'('data type')>
	std::function<int( int)> myLambda3{
						[ ] ( int d ){
									return ++d;
								}
					};

	cout << myLambda3( 6 ) << endl;

	
	return 0;

}



