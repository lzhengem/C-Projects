/*
output the ages of 5 people using arrays and output them in reverse order
Lena Zheng
CS110A in class excercise
4-16-2013
agesinarrays.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	int names[5], i;
	
	cout << "Please enter 5 ages seperated by spaces: ";
	for (i=0; i < 5; i++)
		cin >> names[i];
	cout << "Here are the first 5 ages in reverse order: ";
	for (i = 4; i >= 0; i--)
		cout << names[i] << " ";
	cout << endl;	
}
