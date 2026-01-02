
#include <iostream>
using namespace std;

class Base
{
	int a, b;
public:
	Base()	// Default Constructor
	{
	}
	Base(int e)	// Parametrised Constructor
	{
		a = e;
	}
	Base(int c, int d) : a(c),b(d)		// Member Initializer/Initialization List using Direct Initialization on members.
	{
	}

	/*
	Base(int c, int d)
				  : a{c}			// Formatting.
				  , b{d}			// Member Initializer/Initialization List using Direct List Initialization on Members.
								// Copy Initialization not supported.
								// Members are initialized in the order which they are defined in the class.
	{
	}
	*/
	Base(const Base&)		// Copy Constructor
	{
	}
	
	void disp()
	{
			cout << a << "\n" << b << endl;
	}
};


int main()
{
	// Member Initializer/Initialization List is another way of initialising class objects instead of writing assignments in the Constructor body.

	Base obj (90, 97);			// Using Direct Initialization here.
	Base obj2 {56,78};			// Using Direct List Initialization 
	obj.disp();
	obj2.disp():

	// Member initializer list vs default member initializers: Obvious rules apply.
	// Constructor function bodies: Since we use MIL so we can utilize the empty body for any set up tasks as after the MIL, the body is 	// executed.


	// All the Initialization Types supported by fundamental types are also supported by the Class Types.

	// Calls Base() default constructor
    	Base f1;           // default initialization
    	Base f2{};         // value initialization (preferred)

    	// Calls Base(int) normal constructor
    	Base f3 = 3;       // copy initialization (non-explicit constructors only)
    	Base f4(4);        // direct initialization
    	Base f5{ 5 };      // direct list initialization (preferred)
    	Base f6 = { 6 };   // copy list initialization (non-explicit constructors only)

    	// Calls Base(const Base&) copy constructor
    	Base f7 = f3;      // copy initialization
    	Base f8(f3);       // direct initialization
    	Base f9{ f3 };     // direct list initialization (preferred)
    	Base f10 = { f3 }; // copy list initialization

	// Copy Elision

	return 0;
}

References:

	https://www.learncpp.com/cpp-tutorial/introduction-to-constructors/
	https://www.learncpp.com/cpp-tutorial/constructor-member-initializer-lists/
	https://www.learncpp.com/cpp-tutorial/class-initialization-and-copy-elision/
	https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/

