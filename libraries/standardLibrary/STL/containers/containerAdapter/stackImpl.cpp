
/*
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack <int> stack1;					// Declaration

									// Assignment & initialization not supported

	stack1.push(10);					// inserting elements at the back 
	stack1.push(20);
	stack1.push(30);

	cout << stack1.top() << endl;			// Access to the top element

	while ( !stack1.empty())				// Access
	{
		cout << stack1.top() << endl;
		stack1.pop();
	}

	stack <int> stack2;					
	stack2.push(10);					
	stack2.push(20);
	stack2.push(30);

	stack2.pop();						// Removing elements from the back
	stack2.pop();
	while ( ! stack2.empty())				// Access
	{
		cout << stack2.top() << endl;
		stack2.pop();
	}
	
	return 0;	
}



