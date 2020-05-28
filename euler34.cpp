// 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
// Find the sum of all numbers which are equal to the sum of the factorial of their digits.
// Note: as 1! = 1 and 2! = 2 are not sums they are not included
#include <iostream>

using namespace std;

int factorial(int n)
{
  int f = 1;
  for (int i = n; i > 0; i--){
    f *= i;
  } return f;
}
int digitsum(int n)
{
  int digit; int sum = 0; 
  while (n>0){
    digit = n % 10;
    sum += factorial(digit);
    n /= 10;
  } return sum;
}
int main()
{
  int totalsum = 0;
  for (int i = 144; i < 1000000; i++){
    if (i == digitsum(i)){
      totalsum += i;
    }
  } cout <<totalsum<<endl;
}
//output is 40730