
#include <iostream>
using namespace std;

class Base
{
	static Base* instance;
	Base( ) { }				// This is necessary otherwise object can be created directly.
	
public:
	static Base* getinstance( )
	{
		if( ! instance )
			instance = new Base;
		return instance;
	}
};

Base* Base::instance = nullptr;

int main()
{
	Base* obj = Base::getinstance();
	
	// Base obj2;						// E. not possible bcoz constructor is private.
	return 0;
}





