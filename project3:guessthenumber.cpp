/*
Lena Zheng
CS 110A PP6
Guess the number game. The computer will generate a random number in 
between a certain range. The player provides the range they desire and the 
player can guess a limited amout of guesses, depending on the range.
project3.cpp
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int guesses_left (int lowest_number, int highest_number);
int randomizer(int lowest_number, int highest_number);
void gameplay(int secret, int lowest_number, int highest_number, int i);

int main()
{
	int lowest_number, highest_number, secret, i;
	char again;
	do 
	{	
	cout << "New game. Enter the desired range from lowest "; 
	cout << "to highest\nseparated by a space: ";
	cin >> lowest_number >> highest_number;
	cout << "The range will be from " << lowest_number << " to " <<
	highest_number << endl;

	//randomly generates a secret number
	secret = randomizer(lowest_number, highest_number);

	//ask players for their guesses and tell them to guess higher, 		
//lower, or if they won. also accounts for number of guesses left 		
//after each guess.
	gameplay(secret, lowest_number, highest_number, 
guesses_left(lowest_number, highest_number));
	
	cout << endl;
	cout << "Do you want to play again? Type y or n. ";
	cin >> again;
	}while(again == 'y' || again == 'Y');
		

}
// finds the amount of guesses allowed
int guesses_left (int lowest_number, int highest_number)
{	
	int i;
	i = (ceil(log (highest_number - lowest_number + 1) /log(2)));
	cout << "You have a max of " << i << " guesses!" << endl;
	return i;
}

//randomly generates a secret number
int randomizer(int lowest_number, int highest_number)
{
	srand(time(0));
	return rand()%(highest_number - lowest_number) + lowest_number;
}
//ask players for their guesses and tell them to guess higher, lower, or
// if they won. also accounts for number of guesses left after each guess.

void gameplay(int secret, int lowest_number, int highest_number, int i)

{	int guess;
	do
	{
		cout << "What is your guess? ";
		cin >> guess;
		cout << "You guessed " << guess << endl;
		if (guess >= highest_number || guess < lowest_number)
		{
			cout << "Do you know how to play?? Enter an";
			cout << " integer between " << lowest_number; 
			cout << " and " << highest_number << "!";
		}
		else if(guess == secret)
		{
			cout << "You win! ";
			break;
		}
			
		else if ( guess > secret)
		{
			cout << "Guess lower!";
			i--;
		}
		else
		{
			cout << "Guess higher!";
			i--;
		}
		cout << endl;
		cout << "You have " << i << " guesses left. ";

		if (i == 0)
		{
			cout << "You lose! The number was " << secret;
			break;
		}
			

	} while (true);
}

