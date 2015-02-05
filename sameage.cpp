/*
Lena Zheng
inclass excercise:
output if 2 peoples ages are not the same
sameage.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	int age1, age2;

		
	cout << "Person 1, please enter your age: ";
	cin >> age1;
	cout << "Person 2, please enter your age: ";
	cin >> age2;
	if (!cin)
		cout << "Please enter an integer.\n";
	else
	{
		if (age1 == age2)
			cout << "You two are the same age\n";
		else if (age1 != age2)
			cout << "You are not the same age.\n";	

}
	return 0;
}
