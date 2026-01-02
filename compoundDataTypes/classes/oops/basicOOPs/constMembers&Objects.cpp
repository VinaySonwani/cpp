

#include <iostream>
using namespace std;

class Base
{
	const int i, j;
public:
	/*
	Base(int a, int b)		// This is not allowed.
	{
		i = a;
		j = b;
	}
	*/

	Base( int x, int y ) : i( x ), j( y ) { }		// This is how to initialize const members.

	void show()
	{
		cout << i << " " << j << endl;
		
		 // i = 3;		// E. Bcoz members are const. Once these are initialized any attempt to modify is not allowed.
		 // j = 4;
	}

	void dsply( ) const
	{
		cout << i << " " << j << endl;

		 // i = 5;		// E. Same. Even it can't modify the non const members bcoz it guarantee it will not do it.
		 // j = 6;

		// show( );		// E. Const method can only call const methods.
	}
};

int main( )
{
	Base obj1(1, 2);
	obj1.show();

	obj1.dsply( );		// OK.

	const Base obj2( 7, 8 );
	// obj2.show( );				// E. Const object can only call const method.
	obj2.dsply( );
	
	return 0;
}


// Fn overloading using const.


