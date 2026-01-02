

#include<iostream>
#include <algorithm>
using namespace std;


int main( )
{
	// works with char but not with string
	char arr1[ ] = "hello";
	char arr2[ ] = "ganzo";

	if( lexicographical_compare(arr1, arr1 + 5, arr2, arr2 + 5 ) )
    	{
        	cout << "hello is lexicographically less than ganzo" << endl;
    	}
    	else
    	{
        	cout << "hello is not lexicographically less than ganzo" << endl;
    	}


	
	// works with predicate.
	char arr3[ ] = "hello";
	char arr4[ ] = "ganzo";

	if( lexicographical_compare(arr3, arr3 + 5, arr4, arr4 + 5, [ ] ( char s1, char s2 ) { return tolower(s1)<tolower(s2); } ) )
    	{
        	cout << "hello is lexicographically less than ganzo" << endl;
    	}
    	else
    	{
        	cout << "hello is not lexicographically less than ganzo" << endl;
    	}


	
	/* Comparing strings can be generally used in dictionary, where we need to place words in lexicographical order. 		    Example of this can be to find the word which occurs 1st in dictionary among given set of words. */
	// initializing char arrays
   	char list[][100]={
        {'a','b','a','c','u','s'},
        {'a','p','p','l','e'},
        {'c','a','r'},
        {'a','b','b','a'}
    	};
    
    	char min[100] = "zzzzzz";
    
    	// using lexicographical_compare for checking 
    	// the smallest
    	for (int i=0; i<4; i++)
    	{ 
        	if( lexicographical_compare(list[i], list[i] 
        	+ strlen(list[i]), min, min+strlen(min)))
    	{
        	strcpy(min,list[i]);
    	}
    	}
    
    	// prints "abacus"
    	cout << "The smallest string is : ";
    	for(int i = 0; min[i]!='&#092;&#048;'; i++)
    	{
        	cout<<min[i];
    	}
    	
	return 0;		
}





