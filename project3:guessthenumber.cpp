/*
guess the number game
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void new_game(int lowest_number, int highest_number);
int guesses_left (int lowest_number, int highest_number);
int randomizer(int lowest_number, int highest_number);

int main()
{
// how to repeat, but be able to change the range for new game
	int lowest_number, highest_number, secret, i, guess;
	char again;
	do {	
cout << "Enter the desired range from lowest to highest separate by a space: ";
	cin >> lowest_number >> highest_number;

	new_game(lowest_number, highest_number);
	i = guesses_left(lowest_number, highest_number);

	secret = randomizer(lowest_number, highest_number);
	cout << "You have " << i << " guesses left." << endl;

	do
	{	cout << "What is your guess? ";
		cin >> guess;
		cout << "You guessed " << guess << endl;
		cout << secret;
		if (guess >= highest_number || guess < lowest_number)
			cout << "Do you know how to play?? Enter an integer between " << lowest_number << " and " << highest_number << "!";

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
		else if (guess < secret)
		{
			cout << "Guess higher!";
			i--;
		}
		cout << endl;
		cout << "You have " << i << " guesses left. ";

		if (i == 0)
		{
			cout << "You lose!";
			break;
		}
			

	} while (true);
	cout << endl;
	cout << "Do you want to play again? Type y or n. ";
	cin >> again;
}while(again == 'y' || again == 'Y');
		

}

void new_game(int lowest_number, int highest_number)

{
	cout << "New game. The range is from " << lowest_number << " to "
	<< highest_number << ". ";
	

}

int guesses_left (int lowest_number, int highest_number)
{
	return int(ceil(log (highest_number - lowest_number + 1) /log(2)));
}

int randomizer(int lowest_number, int highest_number)
{
	srand(time(0));
	return rand()%(highest_number - lowest_number) + lowest_number;
}



