// 2**15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2**1000?
#include <iostream>
#include "ttmath/ttmath.h"

using namespace std;

ttmath::Int<3> digitsum(int base, int power)
{
  ttmath::Int<40> n, digit, sum = 0;
  n=base;
  n.Pow(power);
  while (n>0){  
    digit = n % 10;
    n = n/10;
    sum += digit;
  }
  return sum;
}

int main()
{
  cout<<"digitsum: ";cout<<digitsum(2,1000)<<endl;
}

//output is 1366
