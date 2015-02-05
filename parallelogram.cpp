/*
Parallelogram Program
Lena Zheng
make a parallelogram picture
CS110A Lab 3
parallelogram.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int side, width, length;
	char character;
	
	cout << "How long do you want each side to be? ";
	cin >> side;
	
	if (side <=0)
	{
		cout << "Please enter an integar greater than 0." << endl;
		return 0;
	}
		
	cout << "Please enter the character you want it to be made of: ";
	cin >> character;
	cout << endl;
	
//top triangle
	for (length = 1;length <=side; length++)
	{
		cout << character << endl;
		if (length == side)
			break;

// for the width of the top triangle

		for (width = 1; width <= length; width++)
			cout << character;
	}

//bottom triangle
	for (length = side-1; length > 0; length--)
	{
		cout << setw(side+ 1 -length) << character;
		
//width of bottom triangle
		for (width = 1; width < length ; width++)
			cout << character;
		cout << endl;
	}
	
	return 0;

}

/*
for my own reference -
alternative for bottom portion without set(w):
	int i;
	for (i = 1; i < side; i++)
	{
		for (length = 1; length <= i; length++)
		{
			cout << " ";
		}
		for (width = 1; width <= side -i; width++)
			cout << character;
		cout << endl; 
	}
				
	

*/

/*
[lzheng22@hills ~]$ a.out
How long do you want each side to be? 6
Please enter the character you want it to be made of: @

@
@@
@@@
@@@@
@@@@@
@@@@@@
 @@@@@
  @@@@
   @@@
    @@
     @
[lzheng22@hills ~]$ a.out
How long do you want each side to be? 9
Please enter the character you want it to be made of: *

*
**
***
****
*****
******
*******
********
*********
 ********
  *******
   ******
    *****
     ****
      ***
       **
        *
[lzheng22@hills ~]$ 


*/
