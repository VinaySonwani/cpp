
#include <iostream>
using namespace std;

class Base
{
public:
	Base( ) 
	{
		cout << "Base constructor" << endl;
	}

	~Base( )
	{
		cout << "Base destructor" << endl;
	}
};

class Child : public Base
{
public:
	Child( ) 
	{
		cout << "Child constructor" << endl;
	}

	~Child( )
	{
		cout << "Child destructor" << endl;
	}
};

int main()
{
	Child obj;			/* Because Child inherits Base, Child is-a two part class now. It has Base as one part 
					    and Child as another. So, a Child class can contains multiple parts, one part for each
					    inherited class and one part for itself */

	return 0;
}

// Construction: Base first derived later. Destruction: Derived first base later.


/*

#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base' constructor" << endl;
	}

	~Base()
	{
		cout << "Base' destructor" << endl;
	}
};

class Derived1 : public Base
{
public:
	Derived1()
	{
		cout << "Derived1's constructor" << endl;
	}

	~Derived1()
	{
		cout << "Derived1's destructor" << endl;
	}
};

class Derived2 : public Base, public Derived1	// This generates a warning, see it why.
{
public:
	Derived2()
	{
		cout << "Derived2' constructor" << endl;
	}

	~Derived2()
	{
		cout << "Derived2' destructor" << endl;
	}
};


int main()
{
	Base Bobj;
	Derived1 D1obj;		
	Derived2 D2obj;

	return 0;
}

// D2obj goes out of scope first.

*/




