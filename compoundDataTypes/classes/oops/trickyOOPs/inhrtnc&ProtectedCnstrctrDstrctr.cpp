

#include <iostream>
using namespace std;

class Base
{
protected:
	Base()
	{
		cout << "Base' constructor" << endl;
	}

	~Base()
	{
		cout << "Base' destructor" << endl;
	}
};

class Derived : public Base			// Derived is able to inherit as Base's constructor is protected.
{
public:
	Derived()
	{
		cout << "Derived's constructor" << endl;
	}
	~Derived()
	{
		cout << "Derived's destructor" << endl;
	}
};


int main()
{  
	Derived obj2;

	return 0;
}





