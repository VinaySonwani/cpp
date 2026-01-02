
/*

#include <iostream>
using namespace std;

class Base
{
	Base( ) { }
	~Base( ) { } 
};

class Derived : public Base
{
};


int main()
{
	Base* obj( new Derived );

	return 0;
}

*/

/*

#include <iostream>
using namespace std;

class Base
{
	Base( ) = delete
	 { } 
	~Base( ) = delete
	{ } 
};

class Derived : public Base
{
};


int main()
{
	Base* obj( new Derived );

	return 0;
}

*/


#include <iostream>
using namespace std;

class Base final
{
	Base( ) = delete
	 { } 
	~Base( ) = delete
	{ } 
};

class Derived : public Base
{
};


int main()
{
	Base* obj( new Derived );

	return 0;
}