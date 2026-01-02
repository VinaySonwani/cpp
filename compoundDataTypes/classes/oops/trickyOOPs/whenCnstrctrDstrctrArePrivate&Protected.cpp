
#include <iostream>
using namespace std;

 // When Constructors and destructors are private.
class Base
{
	Base()
	{
		cout << "Base's constructor \n" << endl;
	}

	~Base()
	{
		cout << "Base's destructor \n" << endl;
	}

public:
	void dsply()
	{
		Base();
	}
};


 // When Constructors and destructors are protected.
class Base2
{
protected:
	Base2()
	{
		cout << "Base2's constructor \n" << endl;
	}

	~Base2()
	{
		cout << "Base2's destructor \n" << endl;
	}

public:
	void dsply()
	{
		Base2();
	}
};



int main()
{
	// Base objb;            // E. Bcoz constructor and destructors are private & protected so they are not accessible, hence class object can't be 					// created like this.
	// Base2 objb2;          // E.

	Base* objb3 = NULL;      // OK. This is how to create class object in this situation.
	objb3->dsply();          // calling dsply as we need a public method to access private Constructor.

	Base2* obj4 = NULL;      // OK.
	obj4->dsply();		 // // calling dsply as we need a public method to access protected Constructor.
	return 0;
}