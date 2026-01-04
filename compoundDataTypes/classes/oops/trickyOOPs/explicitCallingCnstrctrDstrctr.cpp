
#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base's constructor" << endl;
	}
	~Base()
	{
		cout << "Base's destructor" << endl;
	}
};


int main()
{
	Base(); 				// OK. Calls base constructor & immediately calls destructor too.

	Base obj2;			

	obj2.~Base(); 			// OK. Calls base destructor. obj2 again calls destructor when goes out of scope.

	Base obj3;			// calls destructor when goes out of scope.
	// obj3.Base();  		// E. Not allowed.

	cout << "going out of scope==>" << endl;

	return 0;
}

