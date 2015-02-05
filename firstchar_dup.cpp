/*
Lena Zheng
CS110A
firstchardup.cpp
 determine if there are duplicates of the first character in a string 
*/

#include <iostream>
#include<cstring>
using namespace std;

bool dup(char word[]);

int main()
{

	char word[50];
	cout << "Please enter your word: ";
	cin >> word;
	if (dup(word))
		cout << "Duplicate of first letter found";
	else
		cout << "No duplicate of first letter found";
	cout << endl << endl;
}

bool dup (char word[])
{
	char first_char = word[0], length_word;
	int i;
	length_word = strlen(word);
	for (i = 1; i != length_word; i++)
	{
		if (word[i] == first_char)
			return true;
	}
	return false;
}
