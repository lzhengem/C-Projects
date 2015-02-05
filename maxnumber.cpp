/*
output the largest number from a file to a new file
maxnumber.cpp
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()

{
	ifstream number_input;
	ofstream numbermax_output;
	char inputFileName[21], outputFileName[21];
	double the_score, max;
	
	cout << "Please enter name of file containing numbers: ";
	cin >> inputFileName;

	number_input.open (inputFileName);
	if (!number_input)
	{
		cout << "\nError opening " << inputFileName << endl;
		exit(1);
	}

	cout << "Please enter name of file to show the max number: ";
	cin >> outputFileName;

	number_input >> the_score;
	max = the_score;
	while (!number_input.eof())
	{
		number_input >> the_score;
		if (the_score > max)
			max = the_score;
	}

	number_input.close();	
	
	numbermax_output.open (outputFileName);
	numbermax_output << "The max in " << inputFileName << " is " <<
	max << endl;
	
	numbermax_output.close();
	return 0;
}
