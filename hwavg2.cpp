/*
Lena Zheng
3 homework grades averages saved in a file "hwgrades.txt"
hwavg2.cpp
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()

{
	char name[81];
	double hw1, hw2, hw3, avg;
	ofstream hwgrades;
	
	cout << "Please enter your full name: ";
	cin.getline(name, 81);

	cout << "Please enter your 3 homework grades separated by spaces: ";
	cin >> hw1 >> hw2 >> hw3;

	hwgrades.open("hwgrades.txt");
	hwgrades << fixed << setprecision(2) << showpoint;

	avg = (hw1 + hw2 + hw3)/3;
	cout << "Your average is saved in hwgrades.txt.\n";
	hwgrades << "Hello " << name << ", ";
	hwgrades << "your homework average is: " << avg << endl;
	hwgrades.close();
	return 0;
} 


