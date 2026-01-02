
#include <iostream>
using namespace std;

class Base
{
	int m_id;
public:
	Base(int a): m_id(a)
	{
	}
	
	void getid()
	{
		cout <<  m_id << endl;
	}

};

class Derived: public Base
{
	double m_cost;
public:
	Derived(double cost, int id)
        : Base (id )					/* Call Base constructor from derived's constructor. This is must when Base doesn't have default constructor but
								    have parameterised constructor. */
        , m_cost(cost )
    	{
    	}
	
	void getCost()
	{
		cout << m_cost << endl;
	}

};

int main()
{
	Derived objd( 1.3, 5 );
	objd.getid();
	objd.getCost();

    return 0;
}


