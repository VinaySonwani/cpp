

#include <iostream>
#include <string>		// for C++ String class type string
using namespace std;

int main()
{
	// Using AMA for String class type string. It's supported only. The class takes care of the size.
			string str3;


	str3 = "rota";



	// AMA + initialization
			string str1 = "EarPod";
			string str2 = "AirPod";



	cout << str3 << endl;

	for( int i =0; i < 4; i++ )
		cout << str3[ i ] << endl;

	for( auto i : str3 )
		cout << i << endl;


	
	cout << str1.size() << endl;		// Standard way of getting the size of a C++ String class type string.

	int size2 = sizeof( str1) / sizeof(str1[0] );		// this gives random value so not allowed.
	// cout << strlen(str1) << endl;		// cross functionality doesn't exist.

	

	// from c-style string to string class type.
		// cout << string(ptr) << endl; 		// commented as ptr not available.



	// Methods of C++ string class
			/*
			size() 		// returns the size of the string.
			getline()	// This function is used to store a stream of characters as entered by the user in the object memory.
			push_back()	// This function is used to input a character at the end of the string.
			pop_back()	// Introduced from C++11(for strings), this function is used to delete the last character from the string. 
			capacity()	// This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. 								// Additional space is allocated so that when the new characters are added to the string, the operations can be done 
					// efficiently.    		
			resize()	// This function changes the size of the string, the size can be increased or decreased.
			length()	// This function finds the length of the string.
			shrink_to_fit()	// This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation 
					// is useful to save additional memory if we are sure that no further addition of characters has to be made.
			begin()		// This function returns an iterator to the beginning of the string.
			end()		// This function returns an iterator to the next to the end of the string.
			rbegin()	// This function returns a reverse iterator pointing at the end of the string.
			rend()		// This function returns a reverse iterator pointing to the previous of beginning of the string.
			cbegin()	// This function returns a constant iterator pointing to the beginning of the string, it cannot be used to modify the contents 
					// it points-to.
			cend()		// This function returns a constant iterator pointing to the next of end of the string, it cannot be used to modify the 
					// contents it points-to.
			crbegin()	// This function returns a constant reverse iterator pointing to the end of the string, it cannot be used to modify the 
					// contents it points-to.
			crend()		// This function returns a constant reverse iterator pointing to the previous of beginning of the string, it cannot be used to 
					// modify the contents it points-to.
			*/


}