
// Lambda expression is defining a function inside a function.
// These are implemented as a functor.

#include <iostream>

int main()
{
	std::cout << "main entry" << std::endl;

	[ ] ( ) auto 
	{  };				/* Simplest Lambda Expression with empty capture clause, empty parameter list and auto as return type. 
				   	    Parameter paranthesis can be removed if list is empty and auto is optional. This type of Lambda Expression 
					    is called function literal as it has been defined where it was needed. */

	std::cout << "main exit" << std::endl;

	return 0;
}




