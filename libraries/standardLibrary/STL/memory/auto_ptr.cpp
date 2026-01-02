
// Depricated with C++11 and removed in C++17 in favour of unique_pointer. Implements move semantics through copy constructor and assignment operator.


#include <iostream> 
#include <memory>			// Dynamic Memory management library
using namespace std; 

class A { 
public: 
	void show() { cout << "A::show()" << endl; } 
}; 

int main() 
{ 
	auto_ptr<A> p1(new A); 
	p1->show(); 
	cout << p1.get() << endl;		// returns the memory address pointed by p1 

	auto_ptr<A> p2(p1);		// copy constructor called, this makes p1 empty. 
	p2->show(); 
	cout << p2.get() << endl; 

	cout << p1.get() << endl; 	// It becomes nullptr.
	p1->show(); 				// It can still call show(), don't know how. Should be an error as at one time only one Smart Pointer should be pointing to
							// the underlying class type.
	

	return 0; 
}







