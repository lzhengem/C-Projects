/*
Lena Zheng
CS110A consumer program lab 3: loan program
Given the loan amount, interest rate, and how much you are paying a month, 
this program tells you how long it will take you to pay it off and the 
amount of interest accrued.
loan.cpp
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// asks user how much they want to borrow, the interest, and how much they 
//are going to pay each month
void get_input(double& principle, double& interest, double& payment);

//tells user how long it will take to pay off the loan and the total 
interest 
//they will pay
double pay_off_loan(double principle, double rate, double payment, int& 
months, double& total_interest);

//checks if a negative number was entered or not
bool negative_check(float number);


int main()
{
	double principle, interest, payment, total_interest = 0;
	int months = 0;
	
	cout << "\n** Welcome to the Consumer Loan Calculator **\n\n";

	get_input(principle, interest, payment);

	// if they can pay if off within a month, let them know
	if (payment >= principle)
	{

		cout << "If you pay this off within a month - no 
interest"; 			cout << " for you! If not,";
		
	}

	pay_off_loan(principle, interest, payment, months, 
total_interest);

	cout << "\n\n** Don't get overwhelmed with debt! **\n\n";
	return (0);
}

void get_input(double& principle, double& interest, double& payment)
{
	// ask them how much they want to borrow, repeats if 0 or below
	do{
		cout << "How much do you want to borrow? $";
		cin >> principle;
	}while(negative_check(principle));

	// ask what is interest rate, repeats if 0 or below
	do{
		cout << "What is the annual interest rate expressed ";
		cout << "as a percent? ";
		cin >> interest;
	}while(negative_check (interest));

	// ask how much they will pay each month, repeats if 0 or below
	do {cout << "What is the monthly payment amount? $" ;
		cin >> payment;
	}while(negative_check (payment));

	interest = interest / 12 / 100;
}

double pay_off_loan(double principle, double rate, double payment, int& 
months, double& total_interest)
{
	double min_pay, last_payment;

	//calculates how many months needed to pay off, and total interest 
paid
	while (principle > 0)
	{	
		min_pay = principle * rate;


		//if they are not paying enough to cover the interest, 
tells 			//them the minimum amount they must pay to 
eventually pay off 			//loan		
		if (payment < min_pay)
		{
			cout << "You have to pay at least $" << fixed << 
setprecision(2) << min_pay + 1;
			cout << ".\nBecause your monthly interest is $" << 
fixed << setprecision(2) << min_pay << ".";

			return (0);
		}

		//calculates the month and interest if not underpaying or 			
//overpaying
		else
		{
			min_pay = principle * rate;		
			principle = principle + min_pay - payment;
			months++;
			total_interest = min_pay + total_interest;
		}
		
	}
	last_payment = principle + payment;

	cout << "\nYour debt will be paid off after " << months;
	cout << " month(s), with a final payment of just $" << fixed << 
setprecision(2) << (last_payment) << endl;
	cout << "The total amount of interest you will pay during that";
	cout << " time is $" << fixed << setprecision(2) << 
(total_interest);


}

// checks if the number inputted is negative or not
bool negative_check (float number)
{		
	if (number <= 0)
	{
		cout << "You must enter a positive number!\n";
		return (number <= 0);
	}
	else return false;
}


/*
mimi@Toshiba:~/Desktop/CS110A$ ./a.out

** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $1000
What is the annual interest rate expressed as a percent? 18
What is the monthly payment amount? $50

Your debt will be paid off after 24 months, with a final payment of just 
$47.83
The total amount of interest you will pay during that time is $197.83

** Don't get overwhelmed with debt! **

mimi@Toshiba:~/Desktop/CS110A$ ./a.out

** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $15000
What is the annual interest rate expressed as a percent? 10
What is the monthly payment amount? $100
You have to pay at least $126.00.
Because your monthly interest is $125.00.

** Don't get overwhelmed with debt! **

mimi@Toshiba:~/Desktop/CS110A$ ./a.out

** Welcome to the Consumer Loan Calculator **

How much do you want to borrow? $-50
You must enter a positive number!
How much do you want to borrow? $-200
You must enter a positive number!
How much do you want to borrow? $20000
What is the annual interest rate expressed as a percent? -2.5
You must enter a positive number!
What is the annual interest rate expressed as a percent? 5
What is the monthly payment amount? $0
You must enter a positive number!
What is the monthly payment amount? $200

Your debt will be paid off after 130 months, with a final payment of just 
$125.79
The total amount of interest you will pay during that time is $5925.79

** Don't get overwhelmed with debt! **

mimi@Toshiba:~/Desktop/CS110A$ 
*/


