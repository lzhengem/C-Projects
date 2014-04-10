/*
Lena Zheng
CS 110A PP6
Credits: I created all parts of this program myself.

Guess the number game. The computer will generate a random number in 
between a certain range. The player provides the range they desire and the 
player can guess a limited amout of guesses, depending on the range.
The random number will include the lowest number but not the highest number.
project3:guessthenumber.cpp
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

/* tells the player how the max amount of guesses they are allowed based on the range the player inputs 
*/
int max_guesses (int lowest_number, int highest_number);

// generates a random secret number for the player to guess
int randomizer(int lowest_number, int highest_number);

/* lets player take guesses, tells them if they need to guess higher or lower, and then tells them how many guesses are remaining. After, asks if player wants to play again
*/
void gameplay(int secret, int lowest_number, int highest_number, int i);

int main()
{
	int lowest_number, highest_number, secret;
	char again;
	do 
	{	
	cout << "\nNew game. Enter the desired range from lowest "; 
	cout << "to highest\nseparated by a space: ";
	cin >> lowest_number >> highest_number;
	while (lowest_number == highest_number)
	{
		cout << "Come on, that'll be too easy! Enter a real range ";
		cout << "at least 1 apart: ";
		cin >> lowest_number >> highest_number;
	}
	
	cout << "The range will be from " << lowest_number << " to " <<
	highest_number << endl;

	secret = randomizer(lowest_number, highest_number);

	gameplay(secret, lowest_number, highest_number, 
max_guesses(lowest_number, highest_number));
	
	cout << endl;
	cout << "Do you want to play again? Type y or n. ";
	cin >> again;
	}while(again == 'y' || again == 'Y');
}

// finds the amount of guesses allowed
int max_guesses (int lowest_number, int highest_number)
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
{
	int guess;
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
			highest_number = guess;
			cout << "Guess lower!";
			
			i--;
		}
		else if (guess < secret)
		{
			lowest_number = guess;
			cout << "Guess higher!";
			i--;
		}
		cout << endl;
		cout << "You have " << i << " guesses left. " << endl;

		if (i == 0)
		{
			cout << "You lose! The number was " << secret;
			break;
		}
			
		cout << endl;
	} while (true);
}

