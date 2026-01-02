
/* In case of inheritance, when creating P&RttBCoDO, when the Pointer or Reference goes out of scope then only Base Destructor is called. In order to call the Derived destructor as well, make the destructor virtual in the base class or optionally in both the classes. /


#include <iostream>
using namespace std;

class B
{
public:
	B()
	{
		cout << "B constructor" << endl;	
	}

	virtual ~B()
	{
		cout << "B destructor" << endl;
	}
};

class D : public B
{
public:
	D()
	{
		cout << "D constructor" << endl;
	}

	virtual ~D()
	{
		cout << "D destructor" << endl;
	}
};

int main()
{
	B *obj( new D( ));
	delete obj;	

	return 0;
}


//Pending: virtual assignment.

// Use obj->Base::fn to overriding virtualisation.




