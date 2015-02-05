/*
Lena Zheng
CS110A
In class exercise: Write a function to calculate the area of a rectangle, 
and a main function to test it by inputting the length and width, calling 
the function, and outputting the resulting area. 
FunctRect.cpp
*/

#include <iostream>
using namespace std;

int area_rectangle(int length, int width);

int main()

{
	int user_length, user_width;

	cout << "Please enter a length and width for your rectangle " 		
	<< "separated by spaces: ";
	cin >> user_length >> user_width;
	cout << "The area of your rectangle is " <<
	area_rectangle(user_length, user_width) << endl;

	return 0;
}

/* 
the function to get the area
*/

int area_rectangle(int length, int width)
{
	int area;	
	area = length*width;
	return area;
}

