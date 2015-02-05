/*
doubleletter.cpp
*/

#include <iostream>
#include <cstring>
using namespace std;
bool is_double_letters(char word[]);

int main()
{
	char word[20];

	cout << "Please enter your word: ";
	cin >> word;
	if (is_double_letters(word))
		cout << "That is a double letter!";
	else 
		cout << "That is not a double letter..";
	cout << endl;
	return 0;


}

bool is_double_letters(char word[])
{
	int i; 
	for (i = 0; i < strlen(word) ; i++)
	{

		if (word[i] == word[i+1])
			return true;		
		else
			return false;
	}
}
