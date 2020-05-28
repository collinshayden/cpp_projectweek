// Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:
// 1634 = 1**4 + 6**4 + 3**4 + 4**4
// 8208 = 8**4 + 2**4 + 0**4 + 8**4
// 9474 = 9**4 + 4**4 + 7**4 + 4**4
// As 1 = 1**4 is not a sum it is not included.
// The sum of these numbers is 1634 + 8208 + 9474 = 19316.
// Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
#include <iostream>
#include <math.h>

using namespace std;

int digitpower(int n)
{
  int digit; int i = 1; int sum = 0;

  while (n>0){
    digit = n % 10;//finds the last digit
    n=n/10;//divides by 10 to move onto next digit for the next iteration
    sum += pow(digit,5);//raises to 5th power, adds to sum
  } return sum;
}

int main()
{
  int totalsum = 0;

  for (int i = 999; i < 1000000; i++){
    if (i == digitpower(i)){
      totalsum += i;
      cout <<digitpower(i)<<endl;
    }
  }
  cout <<totalsum<<endl;
}
//output is 443839