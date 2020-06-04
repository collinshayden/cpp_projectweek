// The 5-digit number, 16807=7**5, is also a fifth power. Similarly, the 9-digit number, 134217728=8**9, is a ninth power.
// How many n-digit positive integers exist which are also an nth power?
#include <iostream>
#include "ttmath/ttmath.h"

using namespace std;

int main()
{
  ttmath::Big<1,2> length, count = 0, num;

  for (int base = 0; base < 10; base++){
    for (int power = 0; power <= 30; power++){

      num = base;//sets num to base to leave base unmodified
      num.Pow(power);//assigns num to (num^power)
      length.Log(num,10);//assigns length to log10(num)
      length = Floor(length) + 1;//floors length, and adds 1. The length of a number is "floor(log10(number)) + 1"

      if (length == power){
        count++;
        cout<<base;cout<<"^";cout<<power;cout<<" = ";cout<<num;cout<<" length:";cout<<length<<endl;
      }
    }
  } cout<<"count: ";cout<<count<<endl;
}
//output is 49