/*
Lena Zheng
CS110A
In class exercise: Write a function to calculate the area of a rectangle, 
and a main function to test it by inputting the length and width, calling 
the function, and outputting the resulting area. Using void.
AreaRectVoid.cpp
*/

#include <iostream>
using namespace std;

void area_rectangle(int length, int width);

int main()

{
	int user_length, user_width;

	cout << "Please enter a length and width for your rectangle " 		
<< "separated by spaces: ";
	cin >> user_length >> user_width;
	area_rectangle (user_length, user_width);

	return 0;
}

/* 
the function to get the area
*/

void area_rectangle(int length, int width)
{
	cout << "The area of your rectangle is " << length*width << endl;
}

