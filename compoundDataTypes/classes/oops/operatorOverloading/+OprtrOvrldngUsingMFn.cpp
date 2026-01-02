

#include <iostream>
using namespace std;

class Base
{
	int i;
public:
	Base( int a ) : i( a ) { }
	
	Base( ) { }	// for obj3.

	Base operator+( Base& obj2 )
	{
		Base obj3;
		obj3.i = i + obj2.i;		// only right parameter is passed. Left parameter is referenced using 'this' pointer.
		return obj3;
	}

	void show( )
	{
		cout << i << endl;
	}
};


int main()
{
	
	Base obj4( 3 );
	Base obj5( 7 );
	Base obj6 = obj4 + obj5;
	obj6.show( );

	return 0;
}


