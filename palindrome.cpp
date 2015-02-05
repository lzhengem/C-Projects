/*
Lena Zheng
CS110A
is the word a palindrome?
palindrome.cpp
*/

#include <iostream>
#include <cstring>
using namespace std;

int is_palindrome(char word[]);

int main()
{	
	char word[20];
	cout << "Please enter a word: ";
	cin >> word;
	is_palindrome(word);

	return 0;
}


int is_palindrome(char word[])
{
	int i, j;
	double word_length;
	word_length = strlen(word);
	j = word_length - 1;

	for (i = 0; i <= word_length/2; i++)
	{

		
		if (word[i] == word[j])
		{
			j--;
			
		}
		else
		{
			cout << "The word that you entered, \""<<
			word << "\" is not a palindrome.\n";
			return 0;
		}
		
	}
	cout << "The word that you entered, \""<< word << "\" is a palindrome.\n";

}
