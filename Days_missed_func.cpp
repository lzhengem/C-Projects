/*
Lena Zheng
CS110A
calculate the average days that employees missed using functions
Days_missed_func.cpp
*/

#include <iostream>
using namespace std;

int num_employees();
int days_missed(int employee);
double average_days_missed(int employee, int total_days_missed);

int main()
{	int num_employee, total_missed_days;
	double average;

	num_employee = num_employees();
	total_missed_days = days_missed(num_employee);
	average = average_days_missed(num_employee, total_missed_days);

	cout << "The average missed days per employee is: " << average << endl;
}


int num_employees()
{
	int number;

	cout << "How many employees does the company have? ";
	cin >> number;
	while (number <=0)
	
	{
		cout << "The number of employees must be one or greater. Please re-enter: ";
		cin >> number;
	}	
	return number;

}

int days_missed(int employee)
{
	int days_missed, days_missed_total, i;
	days_missed_total = 0;
	for (i=1; i <= employee; i++)
	{	
		cout << "Days missed by employee # " << i << ": ";
		cin >> days_missed;
		while (days_missed < 0)
		{
		cout << "Days missed must be zero or greater. Please re-enter: ";
			cin >> days_missed;
		}
		days_missed_total+= days_missed;
		
	}
	return days_missed_total;
}

double average_days_missed(int employee, int total_days_missed)
{
	return total_days_missed/static_cast<double>(employee);
	
}


