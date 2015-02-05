/*

in class excercise
find when the person was born
birthday.cpp
*/

#include <iostream>
#include <string>
using namespace std;

bool getBirthInfo(int& userAge, int& currentYear);
void outputBirthYear(bool birthdayPassed, int userAge, int currentYear);

int main()
{
	bool birthdayPassed;
	int userAge, currentYear;

	birthdayPassed = getBirthInfo(userAge, currentYear);
	outputBirthYear(birthdayPassed, userAge, currentYear);

	return 0;
}

bool getBirthInfo(int& userAge, int& currentYear)
{
	char birthday;

	cout << "How old are you now? ";
	cin >> userAge;
	cout << "What year is it now? ";
	cin >> currentYear;
	cout << "Did you past your birthday yet? (y or n) ";
	cin >> birthday;
	
	return (birthday == 'y' || birthday == 'Y');
	
}

void outputBirthYear(bool birthdayPassed, int userAge, int currentYear)
{
	int birthdate;
	if (birthdayPassed)
	{
		birthdate = currentYear - userAge;

	}
		
	else if (!birthdayPassed)
	{
		birthdate = currentYear - 1 - userAge;

	}
	cout << "You were born in " << birthdate << endl;
}
