
// It is used to convert base pointer to derived pointer and vice-versa. It's an alternative to using Virtual function.

#include<iostream>
using namespace std;

class Base
{
public:
	void show( )				// note, the member fn is not virtual.
	{
		cout << "Base" << endl;
	}

	virtual ~Base( ) { }		// This is must otherwise error saying class is not polymorphic.
};

class Derived : public Base
{
public:
	void show( )
	{
		cout << "Derived" << endl;
	}
};



int main( )
{
	Base* obj( new Derived );
	obj-> show( );

	Derived* obj2( dynamic_cast< Derived* > ( obj ) );
	obj2-> show( );

	Base* obj3( dynamic_cast< Base* > ( obj2 ) );
	obj3-> show( );

	return 0;		
}



// Derived to Base conversion = upcasting. Vice-versa = downcasting.




