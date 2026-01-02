
#include<iostream>
// explicit hdr fl inclusion for fn call.
#include "ExplicitHeader.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	fun(2,3);
	return 0;
}

//Following fn definition has been written in second src file.

//void fun(int c, int d)
//{
//	cout<< (c+d) << endl;
//}