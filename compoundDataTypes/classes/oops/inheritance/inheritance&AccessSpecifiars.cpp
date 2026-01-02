
#include <iostream>
using namespace std;

class A
{
	void A_prnt()
	{
		cout << "Base private member" << endl;
	}

protected:
	void A_show()
	{
		cout << "Base protected member" << endl;
	}

public:
	void A_dsply()
	{
		cout << "Base public member" << endl;
	}

	int k;
};


class B : public A
{
public:
	void B_dsply()
	{
		cout << "Derived public member start" << endl;

	       // A_prnt();	    // E
	       A_show();     // OK
	       A_dsply();     // OK

	      cout << "Derived public member exit" << endl;
	}
};


int main()
{
	B objB;
	objB.B_dsply();

	objB.k =10;				// Mind it.
	cout << objB.k << endl;

	// objB.A_show( );			// E.

	return 0;
}

// In case of Inheritance, Derived's member functions can access Base's public and protected members from within the class. From outside the class it can only access public members of the Base class. */







