
// It's not possible bcoz '=' operator is unary and overloading operators using friend function supports only binary operators.


/*

#include <iostream>
using namespace std;

class Base
{
	int i;
public:
	Base() {}
	Base( int a) : i( a ){ }		

	void show()
	{
		cout << i << endl;
	}

	friend Base operator=(Base& obj2);		// E
};

Base operator=(Base& obj2)
{
		Base obj3;
		obj3.i = obj2.i;
		return obj3;
}

int main( )
{
	Base obj1(1, 2);
	obj1.show();

	Base obj4;
	obj4 = obj1;
	
	return 0;
}

*/
