
#include <iostream>
using namespace std;

class Base
{
	void B_print()
	{
		cout << "Base Private Member" << endl;
	}
protected:
	void B_show()
	{
		cout << "Base Protected member" << endl;
	}
public:
	void B_dsply()
	{
		cout << "Base Public member" << endl;
	}
};

class Drvd1 : public Base
{
public:
	void D1_dsply()
	{
		// B_print();	// E
		cout << "Method-Public-->" << endl;
		B_show();
		cout << "Method-Public-->" << endl;
		B_dsply();
	}
};

class Drvd2 : protected Base
{
public:
	void D2_dsply()
	{
		// B_print();	// E
		cout << "Method-Protected-->" << endl;
		B_show();
		cout << "Method-Protected-->" << endl;
		B_dsply();
	}
};

class Drvd3 : private Base
{
public:
	void D3_dsply()
	{
		// B_print();	// E
		cout << "Method-Private-->" << endl;
		B_show();
		cout << "Method-Private-->" << endl;
		B_dsply();
	}
};

int main()
{
	Drvd1 obj1;
	Drvd2 obj2;
	Drvd3 obj3;
	obj1.D1_dsply();		
	obj2.D2_dsply();
	obj3.D3_dsply();

	obj1.B_dsply( );		// OK

	// obj2.B_dsply();		// E. Bcoz Derived2 has derived Base with Protected Access Specifier.

	// obj3.B_dsply();		// E. Bcoz Derived3 has derived Base with Private Access Specifier.
	
	return 0;
}



// Derived can only access the public members of the Base from outside the class when method of inheritance is Public only.








