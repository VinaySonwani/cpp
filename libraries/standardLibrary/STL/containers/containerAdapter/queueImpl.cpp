
/*
Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.
*/


#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <int> queue1;						// Declaration
	
											// Assignment & initialization not supported

	queue1.push (10);							// inserting element at the back
	queue1.push (20);
	queue1.push (30);

	while ( ! queue1.empty())						// Access
	{
		cout << queue1.front() << endl;
		queue1.pop();
	}

	queue <int> queue2;
	queue2.push (11);							
	queue2.push (22);
	queue2.push (33);	

	queue2.pop();								// removing element from the front
	queue2.pop();
	while ( ! queue2.empty())						
	{
		cout << queue2.front() << endl;
		queue2.pop();
	}
	
	return 0;	
}



