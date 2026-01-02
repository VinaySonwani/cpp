
#include <iostream>
using namespace std;

class SmartPtr
 {
	int* ptr;
public:
	explicit SmartPtr(int* p = NULL) : ptr ( p ) { }

	~SmartPtr() { delete (ptr); }

    	// Overloading dereferencing operator
    	int operator*() { return *ptr; }				

	int* operator -> () { return ptr; }
};

int main()
{
	SmartPtr ptr(new int( 20 ));
    	//*ptr = 20;
    	cout << *ptr << endl;

    /* We don't need to call delete ptr: when the object ptr goes out of scope, the destructor for it is
	automatically called and destructor does delete ptr. */

    	return 0;
}


// Generic smart pointer class using template

/*

#include <iostream>
using namespace std;

template <class T> class SmartPtr {
    	T* ptr; 
public:
    	explicit SmartPtr(T* p = NULL) { ptr = p; }

	~SmartPtr() { delete (ptr); }

	T operator*() { return *ptr; }

    /* Overloading arrow operator so that members of T can be accessed like a pointer (useful if T represents
	a class or struct or union type) */
    	T* operator->() { return ptr; }
};

int main()
{
    SmartPtr<double> ptr(new double( 10.5 ));
    //*ptr = 10.5;
    cout << *ptr << endl;
    return 0;
}

*/