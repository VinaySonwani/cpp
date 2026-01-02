
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base' constructor \n" << endl;
	}
	~Base()
	{
		cout << "Base' destructor \n" << endl;
	}
};


int main()
{
	Base(); // OK. Calls base constructor & destructor too.

	Base obj;
	Base obj2;

	obj2.~Base(); // OK. Calls base destructor.

	Base obj3;
	// obj3.Base();  // E. Not allowed.

	return 0;
}

