// StackL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int arr[10];
int *pnt;
int cnt = 0;

void push();
void pop();
void dsply();

int _tmain(int argc, _TCHAR* argv[])
{
	pnt = &arr[0];
	int c;
	while(1)
	{
		cout<< "enter 1/2/3 to push/pop/display : ";
		cin>> c;
		switch(c)
		{
			case(1):
					push();
					break;
			case(2):
					pop();
					break;
			case(3):
					dsply();
					break;
		}
	}
	return 0;
}

void push()
{
	cout << "Enter value to insert into stack = ";
	cin >> *pnt;
	pnt++;
	cnt++;
}

void pop()
{
	cout << "Popped value is =  " << *(pnt-1) << endl;
	pnt--;
	cnt--;
}

void dsply()
{
	if(cnt==0)
		cout << "stack is empty" << endl;
	else
	{
		for(int i=cnt; i>0; i--)
		{
			//pnt--;
			cout<< arr[i-1] <<endl;
		}
	}
}
