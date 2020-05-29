// The sum of the squares of the first ten natural numbers is,
// 1**2+2**2+...+10**2=385
// The square of the sum of the first ten natural numbers is,
// (1+2+...+10)**2=55**2=3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <math.h>
using namespace std;

int sum_of_squares(){
  int temp; int sum = 0;
  for (int i = 0; i < 101; i++){
    temp = pow(i,2);
    sum += temp;
  } return sum;
}

int square_of_sum()
{
  int sum = 0; int total;
  for (int i = 0; i < 101; i++){
    sum += i;
  } 
  sum *= sum; return sum; 
}

int main()
{
  int diff = square_of_sum()-sum_of_squares();
  cout <<diff<<endl;
}
//output is 25164150