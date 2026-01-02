
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

	//obj -> use( );		// E
	obj -> use2( );		
}