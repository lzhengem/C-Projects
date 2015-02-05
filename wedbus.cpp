
/*
wedding busses needed. 1 wedding bus for 40 people
*/

 #include <iostream>
 #include <cmath>
  using namespace std;

  int main()
  {
        long x;
        cout <<"\n";
        cout << "40 people can fit in one of our busses." << endl;
        cout << "How many people are coming to your wedding: ";
        cin >> x;

double a, d;

        a = double(x)/40;
        cout << "You will need " << ceil(a) << " bus(es)" << endl;
int b, c;
        b = ceil(a)*40,
        c = b - x;
        
        cout << "If you order " << ceil(a) << " busses, ";
        cout << "You will have " << c <<
" extra spaces\n" << endl;
        
    return 0;
  }

