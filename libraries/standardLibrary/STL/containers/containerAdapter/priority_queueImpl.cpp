
/*

A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).

Priority queues are built on the top of the max heap and use an array or vector as an internal structure. In simple terms, STL Priority Queue is the implementation of Heap Data Structure.

*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue <int> pq1;					// declaration

										// Assignment & initialization not supported

	pq1.push(10);							// inserting element at the back
	pq1.push(20);
	pq1.push(30);

	cout << pq1.top() << endl;				// Access to the top element 
	
	while (!pq1.empty())						// Access					
	{
		cout << pq1.top() << endl;
		pq1.pop();
	}
	
	priority_queue <int> pq2;	
	pq2.push(10);							
	pq2.push(20);
	pq2.push(30);

	pq2.pop();							// removing element from the front
	pq2.pop();

	while (! pq2.empty())						
	{
		cout << pq2.top() << endl;
		pq2.pop();
	}
	
	// Creating a min Heap for the Priority Queue

	priority_queue <int, vector <int>, greater <int>> pq3;	
	pq3.push(10);							
	pq3.push(20);
	pq3.push(30);
	
	while (! pq3.empty())						
	{
		cout << pq3.top() << endl;
		pq3.pop();
	}

	return 0;
}
