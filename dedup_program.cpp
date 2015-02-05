/*
Lena Zheng
CS110A
dedup_program.cpp
Write a program that inputs an array of 10 integers from the user, and 
removes the duplicate array elements.
*/

#include<iostream>
using namespace std;
// makes the every index in array equal to -5
void clear_array(int nums[]);

//finds the amount of unique numbers
int get_array_num(int nums[]);

int main()
{
	int total_nums = 10;
	int nums[total_nums], input, total_new_nums;
	clear_array(nums);

	cout << "Please enter 10 integers, hitting return after each one: \n";

// changes the number in array if it has not been repeated, if it is repeated, it remains as -5 in array
	for (int i = 0; i < total_nums; i++)
	{	
		cin >> input;
		bool new_num = true;
		for (int j = -1; j < i; j++)
		{
			
			if (nums[j+1] == input)
				new_num = false;
		}
		if (new_num)
			nums[i] = input;
	}

// get the amount of unique numbers
	total_new_nums = get_array_num(nums);

	cout << "\nYou entered " << total_new_nums<< " distinct numbers: ";

	int new_array[total_new_nums], j = 0;

// for the unique numbers, enter it into a new array so that the new array only contains unique numbers
	for(int i = 0; i < 10; i++)
	{	
		if (nums[i] != -5)
		{
			new_array[j] = nums[i];

			j++;
		}

	}
	cout << endl;

//outputs the new array
	for(int i = 0; i < total_new_nums; i++)
		cout << new_array[i] << " ";
	cout << endl;
}

// makes the every index in array equal to -5
void clear_array(int nums[])
{
	for (int i = 0; i < 10; i++)
		nums[i] = -5;
}

//finds the amount of unique numbers to make index for new array with only unique numbers
int get_array_num(int nums[])
{
	int total_new_num = 0;
	for (int i = 0; i < 10; i++)
	{
		if (nums[i] != -5)
			total_new_num++;
	}
	return total_new_num;
				


}
