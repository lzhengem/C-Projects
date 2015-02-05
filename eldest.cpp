/*in class excercise
who is the oldest?

eldest.cpp
*/
#include <iostream>
using namespace std;


void getInitialAndAge(char& userInitial, int& userAge);
bool askIfUserWantsToEnterAnother();

int main()
{
	int userAge, oldestAge = 0;
	char userInitial, oldestInitial;
	do{
		getInitialAndAge(userInitial, userAge);
		if (userAge > oldestAge)
		{
			oldestAge = userAge;
			oldestInitial = userInitial;
		}
	}while (askIfUserWantsToEnterAnother());
	cout << oldestInitial << " is the oldest\n";
	return 0;

}
void getInitialAndAge(char& userInitial, int& userAge)
{
	cout << "Enter an initial: ";
	cin >> userInitial;
	cout << "Enter " << userInitial << "'s age: ";
	cin >> userAge;
}

bool askIfUserWantsToEnterAnother()
{
	char again;
	cout << "Do you want to enter another initial? (y or n) ";
	cin >> again;
	return (again == 'y' || again == 'Y');
}



