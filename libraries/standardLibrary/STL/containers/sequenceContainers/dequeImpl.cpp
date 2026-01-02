
#include <iostream>
#include <deque>
#include <algorithm> 	// For std::reverse
using namespace std;

int main()
{
	deque <int> deque1;									// Declaration	

														// Assignment not supported			

	deque <int> deque2 {1,2,3,4,5};							// Initialization

	deque <int> :: iterator itr;									// Access
	for ( itr = deque2.begin(); itr != deque2.end(); itr++)
		cout << *itr << endl;
	for (auto i = deque2.begin(); i != deque2.end(); i++)
		cout << *i << endl;
	for (auto i : deque2)
		cout << i << endl;

	deque1.push_front(11);									// insert at the front
	deque1.push_back(22);									// insert at the back
	deque1.insert(deque1.begin(), 33);							// insert at a specific postion
	for (auto i : deque1)
		cout << i << endl;

	deque2.pop_front();										// remove from the front
	deque2.pop_back();									// remove from the back
	deque2.erase(deque2.begin());							// remove from the specific position
	for (auto i : deque2)
		cout << i << endl;
	deque1.clear();										// removing all the elements
	for (auto i : deque1)
		cout << i << endl;

	reverse(deque2.begin(), deque2.end()); 		// using std::reverse function from the algorithm header to reverse the elements of the 											// deque since it doesn't has a reverse method.
	
	return 0;		
}

/*
They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
Double Ended Queues are basically an implementation of the data structure double-ended queue.
Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
*/

