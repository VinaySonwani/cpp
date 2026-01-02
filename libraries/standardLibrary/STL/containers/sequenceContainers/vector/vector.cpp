
#include <iostream>
#include <vector>
#include <algorithm> 	// For std::reverse
using namespace std;

int main()
{
	vector <int> vector1;							

	vector <int> vector2 {20, 30, 40 ,50};				
	vector <int> vector3 (4, 33);
	vector <int> vector4 (vector3);

	cout << vector2[0] << endl;							
	cout << vector2.at(1) << endl;
	vector <int>::iterator itr1;		
	for ( itr1 = vector2.begin(); itr1 != vector2.end(); itr1++)
		cout << *itr1 << endl;
	for (auto i = vector2.begin(); i != vector2.end(); i++)
		cout << *i << endl;
	for ( auto i : vector2 )
		cout << i << endl;

	vector1.push_back(10);							
	for ( auto i : vector1)
		cout << i << endl;
	
	vector1.insert(vector1.begin(), 96);					// Inserting at a specific position
	for ( auto i : vector1 )
		cout << i << endl;

	vector2.pop_back();								// Removing element from the back
	for (auto i :  vector2 )
		cout << i << endl;
	
	vector2.erase(vector2.begin());					// Removing element from a specific position
	
	vector2.clear();								// Removes all the elements

	for ( auto i : vector3 )
		cout << i << endl;

	for ( auto i : vector4 )
		cout << i << endl;

	cout << vector3.size() << endl;
	cout << vector3.max_size() << endl;
	cout << vector3.capacity() << endl;
	vector3.resize(1);
	vector3.shrink_to_fit();
	for (auto i = vector3.begin(); i != vector3.end(); i++)
		cout << *i << endl;

	
	cout << vector4.front() << endl;
	cout << vector4.back() << endl;
	
	cout << vector4.data() << endl;					// returns a Pointer to the internal Array that the Vector is using.

	reverse(vector4.begin(), vector4.end());				/* using std::reverse function from the algorithm header to reverse the elements of the 													    vector since it doesn't has a reverse method. */

	return 0;	
}


/*

// To remove from a specific position use- 
	v.erase(find(v.begin(), v.end(), 'f'));
	std::remove from algorithm.

*/



