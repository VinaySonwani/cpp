
#include <iostream>
using namespace std;

class B
{
	int i;
public:
	B( int a) : i( a ) { }

	void disp()
	{
		cout << i << endl;
	}

	~B()
	{
		cout << "destructor called" << endl;
	}
};


int main()
{
	{
		B obj( 10 );
		obj.disp();
		static B obj2( 20 );
		obj2.disp();
	}	

	cout << "checking destructor call" << endl;			
	
	return 0;
}

// for non-static object the destructor is called right after the block but not for the static object bcoz both objets have block scope here but the n.s. object has block duration and static object has program duration. For it, the destructor is called once main is finished.



