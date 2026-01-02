

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main( )
{
	vector <int> myvc{ 1, 2, 2, 2, 2, 4, 5, 6, 7, 8};
	
	// creating max heap. biggest element as the first element, remaining may be unordered.
	make_heap( myvc.begin( ), myvc.end( ) );
	cout << myvc.front( ) << endl;
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	// creating max heap based on predicate
	make_heap(myvc.begin( ), myvc.end( ), [ ] (int i, int j) { return i > j; } );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;
	cout << myvc.front( ) << endl;

	// after inserting an element in the vector, making it max heap.
	myvc.push_back( 9 );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;
	push_heap(myvc.begin( ), myvc.end( ) );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	// removing max element by pushing it to the last then using vector method pop_back.
	pop_heap(myvc.begin( ), myvc.end( ) );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;
	myvc.pop_back( );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	// sorting in ascending order. can be used with a predicate.
	sort_heap(myvc.begin( ), myvc.end( ) );
	for( auto i : myvc )
		cout << i << " ";
	cout << endl;

	cout << is_heap(myvc.begin( ), myvc.end( ) ) << endl;

	auto it = is_heap_until( myvc.begin( ), myvc.end( ) );
	for( auto it2 = myvc.begin( ); it2 != it; it2++ )
		cout << "heap elements in the containers are: " << *it2 << " ";
	cout << endl;
	

	
	return 0;		
}

/* heap fns can be used in scheduling. In scheduling elements are inserted again and again. instead of sorting each time, heapyfying takes less time. */





