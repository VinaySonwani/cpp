
/*
Fibonacci Series is the number series where each number is the addition of previous two numbers. Ex.- 0,1,1,2,3,5...

Logic is to take three integers, first, second and next. Using a condition to print first, second as it is then adding them for next number.
*/

#include<iostream>
using namespace std;

int main()
{
   	int n;
	cout << "Enter the number of terms of Fibonacci series you want" << endl;
	cin >> n;
	cout << "First " << n << " terms of Fibonacci series are:" << endl;

	int first =0, second =1, next;
	for(int i = 0; i < n; i++)
	{
		if(i <=1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		
		cout << next << endl;
	}

	return 0;	
}