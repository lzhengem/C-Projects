/*
Lena Zheng
3 homework grades averages
hwavg.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	char name[81];
	double hw1, hw2, hw3, avg;
	
	cout << "Please enter your full name: ";
	cin.getline(name, 81);

	cout << "Please enter your 3 homework grades separated by spaces: ";
	cin >> hw1 >> hw2 >> hw3;

	avg = (hw1 + hw2 + hw3)/3;
	cout << "Hello " << name << ", ";
	cout << "your homework average is: " << fixed 
		<< setprecision(2) << showpoint << avg << endl;

	return 0;
} 
