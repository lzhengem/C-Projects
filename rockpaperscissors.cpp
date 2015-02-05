/* 
Lena Zheng
rock paper sissors against computer
rockpaperscissors.cpp
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char player1;
	int compmove;
	

	
	cout << "Please enter your move: \n";
	cout << "('P' for Paper, 'R' for Rock, 'S' for Scissors) ";
	cin >> player1;
	
	cout << "Computer's move is ";

	srand(time(0));
	compmove = rand() % 3;

	if (compmove == 0)
		cout << "rock!\n";
	else if (compmove == 1)
		cout << "paper!\n";
	else if (compmove == 2)	
		cout << "scissors!\n";

	if (compmove == 0 && (player1 == 'r' || player1 == 'R'))
		cout << "Tie!!\n";
	else if (compmove == 1 && (player1 == 'r' || player1 == 'R'))
		cout << "Computer wins!! Paper Covers Rock!!\n";
	else if (compmove == 2 && (player1 == 'r' || player1 == 'R'))
		cout << "You win! Rock Breaks Scissors!!\n";
	else if (compmove == 0 && (player1 == 'p' || player1 == 'P'))
		cout << "You win!! Paper Covers Rock!!\n";
	else if (compmove == 1 && (player1 == 'p' || player1 == 'P'))
		cout << "Tie!!\n";
	else if (compmove == 2 && (player1 == 'p' || player1 == 'P'))
		cout << "Computer wins!! Scissors Cut Paper!!\n";
	else if (compmove == 0 && (player1 == 's' || player1 == 'S'))
		cout << "Computer wins!! Rock Breaks Scissors!!\n";
	else if (compmove == 1 && (player1 == 's' || player1 == 'S'))
		cout << "You win!! Scissors Cut Paper!!\n";
	else if (compmove == 2 && (player1 == 's' || player1 == 'S'))
		cout << "Tie!!\n";
	else
		cout << "Invalid move!!\n";
	cout << endl;
	
	return 0;
}

