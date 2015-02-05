/*
Lena Zheng
CS110A
In-class exercise: write a program using a 2-D array to store sales figure 
for each of 3 divisions, over 4 quarters.

salesfigure.cpp


*/
int output_sales();
#include<iostream>
using namespace std;

int output_sales();

int main()
{

	cout << "This program will calculate the total sales of all the ";
	cout << "company's divisions. \n Enter the following sales ";
	cout << "information: " << endl;
	output_sales();
}

int output_sales()
{
	int quarter_sales[3][4];
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Division " << i +1 << ", Quarter " << j + 
1 << ": ";
			cin >> quarter_sales[i][j];
			total += quarter_sales[i][j];
		}
		cout << endl;
	}
	cout << "The total sales for the company are: " << total << endl;
}
