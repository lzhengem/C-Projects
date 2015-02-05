/*
Lena Zheng
Write a program that inputs numbers from the user, using -1 to terminate 
the input. The program should then display the average of all the numbers, 
and how many were entered. 
loopnumavg.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	double num, num2, total;
	int times;
	times = -1;
	total = 0;

	cout << "Please enter a number, ending with -1: ";

	do
	{
	times++;
	cin >> num;
	total = total + num;		
	if (num == -1)
	break;
	


	}while(true);
	cout << "You entered " << times << " numbers, that average ";
	cout << (total + 1)/times << endl;

	return 0;
}
