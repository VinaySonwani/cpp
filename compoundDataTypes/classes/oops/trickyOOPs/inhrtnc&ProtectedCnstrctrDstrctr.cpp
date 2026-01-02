
#include <iostream>
using namespace std;

class Base
{
protected:
	Base()
	{
		cout << "Base' constructor \n" << endl;
	}

	~Base()
	{
		cout << "Base' destructor \n" << endl;
	}

public:
	void dsply()
	{
		Base();
	}
};

class Derived : public Base	// Derived is able to inherit as Base's constructor is protected.
{
	Derived()
	{
		cout << "Derived's constructor \n" << endl;
	}
	~Derived()
	{
		cout << "Derived's destructor \n" << endl;
	}
};


int main()
{  
	Derived *objd = NULL;
	objd->dsply(); 		// calls base's dsply as derived has no method with this name so compiler checks in the base then.

	return 0;
}

