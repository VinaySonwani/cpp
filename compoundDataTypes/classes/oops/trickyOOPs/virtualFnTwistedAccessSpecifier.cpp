
#include <iostream>
using namespace std;

class Base
{
	virtual void use( ) { cout << "Base private" << endl;}
public:
	virtual void use2( ) { cout << "Base public" << endl; }
};

class Derived : public Base
{
	void use2( ) { cout << "Derived private" << endl; }
public:
	void use( ) { cout << "Derived public" << endl; }
};


int main()
{
	Base* obj( new Derived );

	// obj -> use( );		// E. Bcoz obj is pointing to the Base portion so it first goes to Base class and finds
					// the method is private so not accessible, since the error. Going to check if any
					// override exists is skipped.
	
	obj -> use2( );		// It calls the Derived's use2 while it's private in derived. ?	
}


