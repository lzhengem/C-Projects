/*
Lena Zheng
Switch practice using zip
zipcode.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	int zip, three_digit_zip;

	cout << "Please enter your 5 digit zip code. ";
	cin >> zip;
	three_digit_zip = zip/100;

	switch (three_digit_zip)
	{
		case 900: case 901:
		 cout << "You live in Los Angeles (and area)";
		 break;		
		case 921:
		 cout << "You live in San Deigo (and area)";
		 break;
		case 937:
		 cout << "You live in Fresno (and area)";
		 break;
		case 941:
		 cout << "You live in San Francisco. ";
		 break;
		case 942:
		 cout << "You live in Sacramento. ";
		 break;
		case 946:
		 cout << "You live in Oakland (and area) ";
		 break;		 	
		default:
		cout << "I don't know where you live. ";
	}
	cout << endl << endl;
	return 0;
}

