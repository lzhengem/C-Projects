/*[lzheng22@hills ~]$ cat salestax.cpp

Lena Zheng
CS110A 
sales tax report
salestax.cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	string month;
	int year;
	double income, sales, statetax, countytax, totaltax;

	
	cout << "Please enter the month for this report: ";
	cin >> month;
	cout << "Please enter the year for this report: ";
	cin >> year;
	cout << "Please enter the total income for this month: ";
	cin >> income;
	cout << "Sales Tax Report Saved to file: SalesTaxData.txt" << endl;
		
	sales = income/1.06;
	statetax = sales * 0.04;
	countytax = sales * 0.02;
	totaltax = countytax + statetax;
		
	ofstream salestax;
	salestax.open ("SalesTaxData.txt");
	salestax << fixed << setprecision(2);
	salestax << "\nMonth:		" << month << " " << year << endl;
	salestax << "-----------------------\n";
	salestax << "Total Collected:	$" << setw(10); 
	salestax << income << std::endl;
	salestax << "Sales:			$" << setw(10);
	salestax << sales << endl;
	salestax << "County Sales Tax:	$" << setw(10);
	salestax << countytax << endl;
	salestax << "State Sales Tax:	$" << setw(10);
	salestax << statetax << endl;
	salestax << "Total Sales Tax:	$" << setw(10);
	salestax << totaltax << endl;
	salestax << "-----------------------\n";
	salestax.close();
	return 0;
}
/*[lzheng22@hills ~]$ a.out
Please enter the month for this report: February
Please enter the year for this report: 2005
Please enter the total income for this month: 15000.25
Sales Tax Report Saved to file: SalesTaxData.txt
[lzheng22@hills ~]$ cat SalesTaxData.txt

Month:          February 2005
-----------------------
Total Collected:        $  15000.25
Sales:                  $  14151.18
County Sales Tax:       $    283.02
State Sales Tax:        $    566.05
Total Sales Tax:        $    849.07
-----------------------
[lzheng22@hills ~]$ a.out
Please enter the month for this report: October
Please enter the year for this report: 2004
Please enter the total income for this month: 26572.89
Sales Tax Report Saved to file: SalesTaxData.txt
[lzheng22@hills ~]$ cat SalesTaxData.txt

Month:          October 2004
-----------------------
Total Collected:        $  26572.89
Sales:                  $  25068.76
County Sales Tax:       $    501.38
State Sales Tax:        $   1002.75
Total Sales Tax:        $   1504.13
-----------------------
[lzheng22@hills ~]$ 
*/

