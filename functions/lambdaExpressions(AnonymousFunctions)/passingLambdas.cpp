
#include <iostream>
#include <functional>
using namespace std;

// Method- 1. using auto ( supported C++20 and above ) as the parameter.
void fn1( auto& fnp1 )
{
	fnp1( 2 );
}

// Method- 2. Using regular function pointer as the parameter. Use when empty capture clause.
void fn2( int (*fnp2) ( int ) )
{
	fnp2( 3 );
}

// Method- 3. Using std::function as the parameter.
void fn3( const std::function< int ( int )>& fnp3 )			// const is necessary here otherwise E.
{
	fnp3( 4 );
}

// Method- 4. use a function template with a type template parameter as the parameter.
template< typename T >
void fn4( const T& fnp4 )
{
	fnp4( 5 );
}


int main( )
{
	auto myLambda{
					[ ] ( int a )	{
								return ++a;
							}
				};

	fn1( myLambda );
	fn2( myLambda );
	fn3( myLambda );
	fn4( myLambda );

	return 0;
}


/*

Generic Lambdas:

C++14 onwards, lambdas can use auto as their parameter types. Such lambdas are called generic lambdas.
C++20 onwards, regular functions can also use auto as their parameter type.

*/



