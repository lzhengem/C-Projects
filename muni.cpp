/*[lzheng22@hills ~]$ cat muni.cpp

 Lena Zheng
 CS110A Practice Problem 3
 muni survey
 muni.cpp
*/

#include <iostream>
using namespace std;

int main()

{
	char Muniline[81];
	int days, riders;
	double average;
	cout << "\nWelcome to the Muni Ridership Calculator.\n";
	cout << "Which line did you survey? ";
	cin.getline(Muniline, 81);

	cout << "How many days did you survey it? ";         
	cin >> days;

	if (!cin)
{

	cout << "Error: Please enter a valid input." << endl;
	return 0;
	
}
	else
{
	cout << "How many riders did you count? ";
	cin >> riders; 
}

	if (!cin)
{

	cout << "\nError: Please enter a valid input." << endl;
	return 0;
	
}
	else
{
	average = static_cast<double>(riders)/days;

	cout << "According to your survey, an average of " << average <<
                " people \nrode the " << Muniline << " per day.\n\n";
	return 0;
}
}

/*
[lzheng22@hills ~]$ g++ muni.cpp
[lzheng22@hills ~]$ a.out

Welcome to the Muni Ridership Calculator.
Which line did you survey? K-Ingelside
How many days did you survey it? 5
How many riders did you count? 123456
According to your survey, an average of 24691.2 people 
rode the K-Ingelside per day.

[lzheng22@hills ~]$ a.out

Welcome to the Muni Ridership Calculator.
Which line did you survey? N-Judah
How many days did you survey it? 30
How many riders did you count? 2500000
According to your survey, an average of 83333.3 people 
rode the N-Judah per day.

[lzheng22@hills ~]$ a.out

Welcome to the Muni Ridership Calculator.
Which line did you survey? l line
How many days did you survey it? five
Error: Please enter a valid input.
[lzheng22@hills ~]$ a.out

Welcome to the Muni Ridership Calculator.
Which line did you survey? k line
How many days did you survey it? 6
How many riders did you count? seven billion
Error: Please enter a valid input.
[lzheng22@hills ~]$ 


*/


