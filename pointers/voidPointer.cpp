

#include <iostream>
using namespace std;


int main()
{
	void* ptr = nullptr;

	int a =5;
	ptr = &a;

	int* ptr2 = static_cast<int*> (ptr);	
	cout << *ptr2 << endl;

	return 0;
}



