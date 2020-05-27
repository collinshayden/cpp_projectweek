// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int main()
{
  int a = 0; int sum = 0;
  for (int n=0;n<1000;n++){
    if (a % 3==0 or a % 5==0){
      sum+=a;
    }
    a+=1;
  }
  cout <<sum<<endl;
}