/*
In this code we will get value from user for index of array
and write array on the screen.

Coder: Bar�� Somero�lu
Date: 21.11.23 / 02:00 a.m.
*/



#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int B[5], deger;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please Enter Value for element of the array: ";
		cin >> deger;

		B[i] = deger;
	}

	cout << " " << endl;
	cout << "Elements for the Array: ";


	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << " ";
	}

	cout << " " << endl;

	return 0;
}