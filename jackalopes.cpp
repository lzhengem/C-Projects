/*
Lena Zheng
CS110A
how many jackalopes will you have? 3% will be born, then 1% dies
jackalopes.cpp
*/

#include <iostream>
using namespace std;

int main()

{
	int jackalopes, generations, years, death;
	char again;


	do
	{
		years = 0;
		cout << "\nHow many jackalopes do you have? ";
		cin >> jackalopes;
	
		cout << "How many generations do you want to wait? ";
		cin >> generations;	
	
		cout << "If you start with " << jackalopes << " jackalopes and wait ";
		while (years < generations)
		{
			jackalopes*=1.03;

			death = jackalopes*.01;

			jackalopes = jackalopes - death;

			years++;


		}
		years = 0;
		cout << generations << " generations,\nyou'll end up with a total of "
		<< jackalopes << " of them.\n";
		cout << "\nDo you want to calculate another population? ";
	
		cin >> again;
	
	}
	while (again == 'y');
	
	return 0;
}

