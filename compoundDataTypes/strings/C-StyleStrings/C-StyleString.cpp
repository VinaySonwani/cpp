

// What's a String?

#include <iostream>
#include <string.h>		// for C-style char array type string. Alternative- <cstring> in C++
#include <algorithm>
using namespace std;

int main()
{
	// Declaration
		// Using AMA for a C-style char array type to store a string
			char kar[5];

		// Using DMA for a C-style char array type to store a string.
			int size = 5;
			char* ptr4 = new char[size];
		

	// assignment
		kar[0] = 'A';
		kar[1] = 'P';
		kar[2] = 'C';
		kar[3] = '\0';		// Mind it, without it the string simply becomes an array.

		ptr4[0] = 'L';
		ptr4[1] = 'A';
		ptr4[2] = '\0';

				
	// Initialisation
		// AMA + initialization
			// char arr[4] = { 'R','A','M','A','\0'}		// Error, bcoz no space for null character.
			char var[5] = { 'R','A','M','A','\0' };
			char tar[5] = { 'R','A','M','A'};			// Null character will be automatically placed provided that sufficient space is provided.
			char gar[5] = "Test";					//size is 5 so space is left for null character otherwise will give compilation error.
			char sar[] = "Noun";
			char uar[4]{"New"};
			char yar[]{"kill"};

		// DMA + initialization
			char* nar = new char[5]{ 'a','g','h','j' }; 
			char* lar = new char[5]{"Hrdf"};
			int t = 5;
			char* jar = new char[t]{ "Hrdf" }; 
			char* ptr2 = new char[]{ "Gross" }; 
	

		// C-style char pointer type based strings
			const char* ptr = "God";			// worked before without making it as const but now it's mandatory to make it as const.


	// access
		cout << kar << "\n" << endl;		// Notice we don't have to index the char Array here, just providing the name is enough.
		cout << uar << "\n" << endl;
		cout << yar << "\n" << endl;
		cout << lar << "\n" << endl;
		cout << var << "\n" << endl;
		cout << tar << "\n" << endl;
		cout << gar << "\n" << endl;
		cout << sar << "\n" << endl;
		cout << ptr4 << "\n" << endl;
		cout << nar << "\n" << endl;
		cout << jar << "\n" << endl;
		cout << ptr << "\n" << endl;
		cout << ptr2 << "\n" << endl;

		// single element of a string

			for(int i = 0; i < 5; i++ )
			{
				cout << "kar elements: " << kar[ i ] << endl;
			}

		// using range based for loop
			for( auto i: kar )
				cout << "range based for loop: " << i << endl;



	// Obtaining size
		cout << strlen(kar) << endl;		// Standard way of getting the size of a char Array Type string. It returns the actual size of the string.
			
		// This return the size of underlying array.
			int size1 = sizeof( kar ) / sizeof( kar[ 0 ] );
			cout << size1 << endl;

		cout << strlen(ptr4) << endl;		// standard method in case of a pointer pointing to a string. 
		cout << strlen(ptr) << endl;	
			
		// cout << kar.size() << endl;  		// can't use string class method.
		
	// conversions.
		// From string class to c-style string.
			// cout << strlen(str1.c_str()) << endl;  			// commented due to str1 not existing.

	// std::functions
			/*
			strcpy(s1, s2);			// Copies string s2 into string s1.

			strcat(s1, s2);			// Concatenates string s2 onto the end of string s1.

			strlen(s1);			// Returns the length of string s1.

			strcmp(s1, s2);			// Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

			strchr(s1, ch);			// Returns a pointer to the first occurrence of character ch in string s1.

			strstr(s1, s2);			// Returns a pointer to the first occurrence of string s2 in string s1.
			*/

	return 0;
}


/*

	( kar, ( kar+size ) ) : kar = first element, (kar+size) = last element. size must be obtained using strlen function otherwise unspecified result.

*/





