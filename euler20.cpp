// n! means n × (n − 1) × ... × 3 × 2 × 1
// For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
//and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
// Find the sum of the digits in the number 100!
#include <iostream>
#include "ttmath/ttmath.h"
using namespace std;

int factorialsum(int n)
{
  //to use ttmath::Int<n>, n calculated by the forumula 2^(32*n). n in this case is 20, meaning the class will support up to 2^(32*20)digits
  ttmath::Int<20> digit, sum = 0; 
  ttmath::Int<20> f = 1;
  for (int i = n; i > 0; i--){
    f *= i;
  }
  while (f>0){
    digit = f % 10;//remainder of modulo division is the last digit of f
    sum += digit;
    f /= 10;
  } cout<<sum<<endl;
}

int main()
{
  factorialsum(100);
}
//output is 648
