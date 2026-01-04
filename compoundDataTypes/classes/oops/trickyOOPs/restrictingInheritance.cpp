
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
	Base* obj( new Derived );		// E. It says Constructor implicitly deleted since it is made private.

	return 0;
}

*/

/*

#include <iostream>
using namespace std;

class Base
{
public:
	Base( ) = delete;
	~Base( ) = delete; 
};

class Derived : public Base
{
};


int main()
{
	Base* obj( new Derived );	//E. Constructor is public but explicitly deleted.

	return 0;
}

*/


#include <iostream>
using namespace std;

class Base final
{
public:
	Base( ) { }
	~Base( ) { }
};

class Derived : public Base
{
};


int main()
{
	Base* obj( new Derived );		// E. Constructor is public not deleted explicitly but the Base is 
								// marked as final.

	return 0;
}



