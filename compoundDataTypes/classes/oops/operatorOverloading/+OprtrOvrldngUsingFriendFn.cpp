
#include <iostream>
using namespace std;

class Base
{
	int i;
public:
	Base( int a ) : i( a ) { }
	
	Base( ) { }

	friend Base operator+( Base& obj1, Base& obj2 );

	void show( )
	{
		cout << i << endl;
	}
};

Base operator+( Base& obj1, Base& obj2)
{
	Base obj3;
	obj3.i = obj1.i + obj2.i;
	return obj3;
}

int main()
{
	
	Base obj4( 3 );
	Base obj5( 7 );
	Base obj6 = obj4 + obj5;
	obj6.show( );

	return 0;
}





/*

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Base
{
    string str1;
public:
    Base() {}					// This is required, you know why.
    Base(string ptr1) : str1(ptr1) {}
    void display()
    {
        cout << str1 << endl; 
    }
    friend Base operator+(Base &obj1, Base &obj2);
};

Base operator+(Base &obj1, Base &obj2)
{
    Base obj3;
    // obj3.str1 = obj1.str1 + obj2.str1;		// This is calling + method of String class which is overloaded may be.
    obj3.str1 = obj1.str1.append(obj2.str1);	// This is the right way.
    
    return obj3;
}

int main()
{
    Base obj1("test");
    Base obj2("result");
    Base obj3 = obj1 + obj2;
    obj3.display();
    
    return 0;
}

*/


