
#include <iostream>
using namespace std;

template<typename T>

class Base
{
	T a, b;
public:
	Base(T c, T d): a(c), b(d) { } 
	
	T add();
};

template<typename T>		// Member function defined outside of the class requires their own template declaration.

T Base<T>::add( ) {			// Mind the <T> after class name.
	return (a +b);
}

int main()
{
	Base <int> obj(5, 6);			// <int> is a must
	cout << obj.add() << endl;

	Base <double> obj2(1.5, 1.5);
	cout  << obj2.add() << endl;

	return 0;
}

// cover when there is friend function as well.




