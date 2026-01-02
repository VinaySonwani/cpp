// Namespaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace add
{
	int dosomething(int a, int b)
	{
		return (a + b);
	}
}

namespace sub
{
	int dosomething(int a, int b)
	{
		return (a - b);
	}
}

namespace Math
{
	int subtraction(int a, int b)
	{
		return (a - b);
	}
}

namespace Math
{
	int addition(int a, int b)
	{
		return (a + b);
	}
}

namespace shell
{
	namespace kernel
	{
		int x = 21;
	}
}

namespace ui = shell::kernel;

// using namespace add;


int _tmain(int argc, _TCHAR* argv[])
{
	 //cout << dosomething(1,2); // E, bcoz fn is within a namespace and we have not used that name space

	cout << add :: dosomething(5,6) << "\n" << endl;
	cout << sub :: dosomething(7,8) << "\n" << endl;

	/*using add::dosomething;
	cout << dosomething(15,16) << "\n" << endl;*/

	/*using namespace add; // after this we can call add without namespace within this fn block
	cout << dosomething(11,12) << "\n" << endl;*/

	/*using namespace add;
	using namespace sub;
	cout << dosomething(13,14) << "\n" << endl;*/

	/*{
		using namespace add;
	}
	{
		using namespace sub;
	}*/

	/*cout << Math::addition(17,18) << "\n" << endl;
	cout << Math::subtraction(19,20) << "\n" << endl;*/

	/*cout << shell::kernel::x << "\n" << endl;*/

	/*cout << ui::x << "\n" << endl;*/

	return 0;
}

