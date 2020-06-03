// 2**15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2**1000?
#include <iostream>
#include "ttmath/ttmath.h"

using namespace std;

int main()
{
  ttmath::Int<40> n, digit, sum = 0;
  n=2;
  n.Pow(1000);
  cout<<n<<endl;
  while (n>0){  
    digit = n % 10;
    n = n/10;
    sum += digit;
  }
  cout <<sum<<endl;
}

//output is 1366