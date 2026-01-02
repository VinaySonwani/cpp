
/* When a method is called from a derived object, Compiler first checks in the derived class if the method with the name exists. If it finds one then it demands that the method must be called with the arguments matching the parameters in the method definition in the derived class otherwise generates an error. No effect on the return type. If the method with the same name is not defined in the derived class then the compiler goes to the immediate base for the method and does the same as above. it continues until the matching method is found. */


#include <iostream>
using namespace std;

class Base
{
public:
	void disp( )
	{
		cout << "Base's disp" << endl;
	}
};

class Derived : public Base
{
};

int main()
{
	Derived obj;
	obj.disp( );			// This calls Base's disp.		

	return 0;	
}


//*******************************************************************************************************

/*
#include <iostream>
using namespace std;

class Base
{
public:
	void disp( )
	{
		cout << "Base's disp" << endl;
	}
};

class Derived : public Base
{
public:
	int disp( int a)
	{
		cout << "Derived's disp" << endl;	
		return a;
	}
};

int main()
{
	Derived obj;
	// obj.disp();			// This generates an error
	obj.disp(9);			// This is expected and calls Derived's disp

	return 0;	
}

*/

//********************************************************************************************************

/*
#include <iostream>
using namespace std;

class Base
{
public:
	void disp( )
	{
		cout << "Base's disp" << endl;
	}
};

class Derived : public Base
{
public:
	using Base::disp;		// this instructs the compiler to don't worry and decide based on the argument.		
	int disp( int a)
	{
		cout << "Derived's disp" << endl;	
		return a;
	}
};

int main()
{
	Derived obj;				
	obj.disp( 8 );			// works
	obj.disp( );			// works too.

	return 0;	
}
*/



