/* Craig Persiko
   gradeAverage.cpp
   Solution to:
   Write a program using at least 3 variables 
   to calculate and output the average of the 
   following three test grades: 90, 81.2, and 88.77
*/

#include <iostream>

using namespace std;

int main()
{
double score1, score2, score3, sum, avg;
	score1 = 90;
 	score2 = 81.2;
	score3 = 88.77;
	sum = score1 + score2 +score3;
	avg = sum/ 3;

cout << "The avgerage of the exam is:" << avg << endl;

  return 0;
}
