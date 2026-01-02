
#include <iostream>
using namespace std;

void childFn()
{
	int a, b,c;
	cout<<"Enter two integer values: ";
	cin>>a>>b;
	if(b == 0)
	{ 
		//c = a/b; // not working don't know why 
		throw b; // this fn doesn't has catch block so the exception would be handled by calling fn if it has and so on 
		
	}
		
}
	
int main()
{
	try
	{
		childFn();	
	}
	catch(...)
	{
		cout<<"catching nested exception" << endl;
	}
	return 0;
}