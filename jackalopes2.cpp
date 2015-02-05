/*
Lena Zheng
CS110A
how many jackalopes will you have?  the jackalope population increases by 
3% due to births and decreases by 1% due to deaths.
using "const"
jackalopes2.cpp
*/

#include <iostream>
using namespace std;

int main()

{
	int jackalopes, generations, years, dead;
	char again;
	const double birth = 1.03, death = 0.01;
	years = 0;
	do
	{
		
		cout << "\nHow many jackalopes do you have? ";
		cin >> jackalopes;
	
		cout << "How many generations do you want to wait? ";
		cin >> generations;	
	
		cout << "If you start with " << jackalopes << " jackalopes and wait ";
		{
		do
		{
			jackalopes*=birth;
			dead = jackalopes*death;
			jackalopes =jackalopes - dead;

			years++;


		}
		while (years < generations);
		
		
		
		cout << generations << " generations,\nyou'll end up with a total of "
		<< jackalopes << " of them.\n";
		cout << "\nDo you want to calculate another population? ";
		cin >> again;
		years = 0;
		}
	}
	while (again == 'y' || again == 'Y');
	
	return 0;
}
