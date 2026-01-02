
#include <iostream>
using namespace std;

class Base
{
	int* ptr{ };			// mind '{ }'. this is initialising with default.
public:
	// Base( ) { }		// E. Don't need it as parametrised constructor is using default values for member variable so the call to
					// the constructor becomes ambiguous.

	Base( int* ptr2 = NULL) : ptr( ptr2 ) { }		// Memory should be allocated in the constructor for pointer m.v. to point.

	~Base( )
	{
		delete ptr;		// Memory should be deallocated in the destructor.
		ptr = NULL;
	}

	Base( const Base& obj3)		
	{
		//ptr = obj3.ptr;			/* E. Default copy constructor doing direct copy. new object's ptr and existing object's ptr now 							    pointing to the same memory location. */

		deepcopy( obj3 );
	}

	Base& operator=( const Base& obj5)
	{
		// ptr = obj5.ptr;		// E. Default copy assignment operator doing direct copy.

		if( this != &obj5 )		// so that it's not like obj = obj; i.e. self assignment.
			deepcopy( obj5 );
		
		return *this;			// returning local object ( which is represented by 'this' here ) to maintain chaining.
			
	}

	void deepcopy( const Base& obj4 )
	{
		delete ptr;		// deleting so that to it's not pointing to a memory location. This is why m.vs. were default initialized.
		if( obj4.ptr )
			ptr = new int( *( obj4.ptr ));		/* Allocate memory and then copy the value so that obj & obj2's m.v. b is 											   pointing to different memory location. This is called Deep Copying. */
		else
			ptr = nullptr;
	}

	void show()
	{
		cout << *ptr << endl;
	}
};

int main( )
{
	Base obj1( new int( 10 ) );
	obj1.show( );

	{
		Base obj2( obj1 );		// Culprit.
		obj2.show( );

		Base obj6;			
		obj6 = obj1;			// Culprit.
	}

							/* Once the block ends, obj2 and obj6 get destroyed. The memory they were pointing to also
							    gets destroyed which leaves obj1 pointing to an invalid memory location. */

	obj1.show( );			// Crashes the application.

	// deep copying solves all this.

	return 0;
}


