/*
Lena Zheng
Switch bool practice
workingage.cpp
*/

#include<iostream>
using namespace std;

int main()
{
	string name1, name2;
	int age1, age2;
	
	cout << "Please enter first person's name: " << endl;
	cin >> name1;
	cout << "Please enter first person's age: " <<endl;
	cin >> age1;
		cout << "Please enter second person's name: " << endl;
	cin >> name2;
	cout << "Please enter second person's age: " <<endl;
	cin >> age2;
	
	bool work = age1 >= 18 && age1 <= 65, work2 = age2 >= 18 && age2 
<= 65;
	
	if (work && work2)
		cout << "Both people are beween 18 and 65.\n";
	else if (work && !work2)
		cout << name1 << " is between 18 and 65, but " << name2 << 
" is not.\n";
	else if (!work && work2)
		cout << name1 << " is not between 18 and 65, but " << 
name2 << " is between 18 and 65.\n";	
	else if (!work && !work2)
		cout << "Neither person is between 18 and 65.\n";
	return 0;
}
