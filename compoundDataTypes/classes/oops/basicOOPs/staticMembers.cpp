
#include <iostream>
using namespace std;

class Cls
{ 
private:
	static int j;	/* static member variable declaration. Static member variable declaration is considered somewhat like forward declaration and requires 				    that it should be defined outside the class definition in the global scope. Static member variable is shared by all class objects means 				    each new object doesn't get a fresh copy of static member variable instead it utilises same static m.v. in its current form. Thus, only 				    one copy of static member variable exists in a program. */

public:
	static int i;	

	Cls( ) { }

	// Cls( int x, int y ) : i( x ), j( y ) { }	// This is not allowed.

	Cls( int s, int t)		// this is ok.
	{
		i = s;
		j = t;
	}

	void dsply()  
	{
		cout << "non static method printing i and j: " << i << " " << j << endl;
	}

	static void print()	// static method
	{
		cout << "static method printing i and j: " << i << " " << j << endl;
	}

};

int Cls::i = 1;	// static member variable definition, outside the class definition in the global scope.
int Cls::j = 2;    // works even if it's private

int main()
{
	Cls obj1;	
	obj1.dsply( );

	Cls obj2( 3, 4);
	obj2.dsply();

	obj1.i = 5; 	// obj1 accesses static m.v. and makes it 5. 
	cout << "obj1 made i as: " << obj1.i << endl;
	cout << "obj2 uses i as: " << obj2.i << endl;		// obj2 uses static member variable i in its current form which is i=5.
	
	// It's not advisable to create an object of class then access static member variable instead it should be done with class name and s.r.o.

	Cls::i = 6;		// This is the main property of static member variables.
	cout << "Static m.v. through class name n sro = " << Cls::i << "\n" << endl;  

	// Cls::j = 7;	// We can't access it bcoz s.m.v. is private.

	Cls obj3;
	obj3.dsply();
	obj3.print();	// This is not advisable.
	
	Cls::print();	// bcoz print is a Static method so it can be called with class name and s.r.o.

	// however this is not possible - 
	// Cls::dsply();  bcoz dsply is not static.
	return 0;
}





