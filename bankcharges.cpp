/*
lzheng22@hills ~]$ cat bankcharges.cpp

Lena Zheng
CS110A Practice Problem 4
calculates the bank fees for the month
bankcharges.cpp
*/
        
#include <iostream>
#include <iomanip>
using namespace std;
       
                
int main()
{
        double balance, checks_fee, balance_fee, total_fee;
        int checks;
        
        cout << "Enter the following information"
             << " about your checking account.\n";
        cout << "Beginning balance: $";
                cin >> balance;
                
                
	if (0 < balance and balance < 400) 
{
        balance_fee = 15;
}

	else if ( 400<= balance){
        balance_fee = 0;
}

	else if (balance < 0)
{ 	cout << "\nYour account is overdrawn!\n\n";
	balance_fee = 15;
}
	else 
{
        cout << "Error!\n";
        return 0;
}


        cout << "Number of checks written: ";
                cin >> checks;
        cout << endl;

        
	if ( 0<= checks and checks <20)
	 {
       		 checks_fee = 10 + .10 * checks;

   	 }
	else if ( 20 <= checks and checks < 40)
	 {
       		 checks_fee = .08* checks +10;
	 }
	else if (40 <= checks and checks < 60) 
	 {
 		checks_fee = .06 * checks + 10;
         }
	else if ( 60 <= checks )
	 {
        	checks_fee = 10 + .04 * checks;

	 } 

	else 
	 {
		cout << "Error: Number of checks must be zero or more.\n";
 	return 0;

	 }

        total_fee = balance_fee + checks_fee;
 
        cout << "The bank fee this month is $" << fixed << 
setprecision(2)
 		<< total_fee << endl;

        cout << "Your remaining balance after fees: $"  
                << balance - total_fee << "\n\n";

	if (balance < total_fee)
	 {
        	cout << "Your account will be overdrawn after fees.\n\n";
	 }

	else
         {

         return 0;
	 }
}

/*
[lzheng22@hills ~]$ a.out
Enter the following information about your checking account.
Beginning balance: $1000
Number of checks written: 50


The bank fee this month is $13.00
Your remaining balance after fees: $987.00

[lzheng22@hills ~]$ a.out
Enter the following information about your checking account.
Beginning balance: $405.25
Number of checks written: 5

The bank fee this month is $10.50
Your remaining balance after fees: $394.75

[lzheng22@hills ~]$ a.out
Enter the following information about your checking account.
Beginning balance: $100.05
Number of checks written: 100

The bank fee this month is $29.00
Your remaining balance after fees: $71.05

[lzheng22@hills ~]$ a.out
Enter the following information about your checking account.
Beginning balance: $-5

Your account is overdrawn!

Number of checks written: -10

Error: Number of checks must be zero or more.

[lzheng22@hills ~]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $g
Error!
[lzheng22@hills ~]$ ./a.out
Enter the following information about your checking account.
Beginning balance: $-5

Your account is overdrawn!

Number of checks written: 40

The bank fee this month is $27.40
Your remaining balance after fees: $-32.40

Your account will be overdrawn after fees.

[lzheng22@hills ~]$ 

*/

