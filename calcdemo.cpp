/* Craig Persiko
   calcDemo.cpp
   Demonstrates how variables and data types work in calculations
*/

#include <iostream>

using namespace std;

int main()
{
  int i1 = 11, i2 = 4;
  double d1 = 9.5, d2 = 4;

  cout << "Using numeric literals:\n";
  cout << "2/3 equals: " << 2/3 << endl;
  cout << "2.0/3 equals: " << 2.0/3 << endl;

  cout << "\nUsing integer variables:\n";
  cout << i1 << " * " << i2 << " equals " << i1 * i2 << endl;
  cout << i1 << " / " << i2 << " equals " << i1 / i2 << endl;
  cout << i1 << " % " << i2 << " equals " << i1 % i2 << endl;

  cout << "\nUsing floating-point (double) variables:\n";
  cout << d1 << " * " << d2 << " equals " << d1 * d2 << endl;
  cout << d1 << " / " << d2 << " equals " << d1 / d2 << endl;
  
  cout << "\nUsing a mix of both types of numeric variables:\n";
  cout << i1 << " * " << d1 << " equals " << i1 * d1 << endl;
  cout << i1 << " / " << d2 << " equals " << i1 / d2 << endl;
  
   return 0;
}
  

