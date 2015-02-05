/*
Lena Zheng
How many times to say hello
hellomanytimes.cpp
*/

#include <iostream>
using namespace std;

int main()

{
	int number, i;
	i = 0;

	cout << "How many times should I say hello? " << endl;
	cin >> number;
	
	while (i < number)
	{
		cout << "hello ";
		i++;

		if (i < number)
		{
			cout << "HELLO ";
			i++;
		}
		else 
		{
			cout << endl;		
			return 0;
		}
	}
	cout << endl;
	return 0;
}
