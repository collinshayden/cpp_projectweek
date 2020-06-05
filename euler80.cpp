// It is well known that if the square root of a natural number is not an integer, then it is irrational. 
// The decimal expansion of such square roots is infinite without any repeating pattern at all.
// The square root of two is 1.41421356237309504880..., and the digital sum of the first one hundred decimal digits is 475.
// For the first one hundred natural numbers, 
// find the total of the digital sums of the first one hundred decimal digits for all the irrational square roots.
#include <iostream>
#include "ttmath/ttmath.h"
using namespace std;

ttmath::Big<1,2> sqrtdigitsum(ttmath::Big<1,10> n)//function return defined as a ttmath::big
{
  ttmath::Big<1,10> digit, temp, originalnum, count = 0, tenmultiple = 10, sum = 0;
  
  temp = n; temp.Sqrt(); temp = Floor(temp); temp = temp*temp;//if the square is rational, like sqrt(4) = 2, then flooring will not have an effect. 

  if (n != temp) {//if sqrt is irrational
    originalnum = n; //resets n from the operations performed above
    n.Sqrt(); n = Floor(n); sum += n; n = originalnum;//adds first digit to sum

    while (count < 99){
      n = originalnum;//resets n
      n.Sqrt();//n = sqrt(n)
      n = n * tenmultiple;//to bring the next decimal into units
      n = Floor(n);//floors, makes it an integer so we can % 10
      n.Mod(10);//n % 10 is the last digit of n. 

      sum += n; count++; tenmultiple *= 10; 
      // cout<<count;cout<<" ";cout<<n<<endl;
    } 
  } return sum;
}

int main()
{
  ttmath::Big<1,10> sum, total = 0; 
  for (ttmath::Big<1,2> i = 1; i < 100; i++){
  sum = sqrtdigitsum(i); 
  total += sum;
  cout<<"num: ";cout<<i;cout<<" sum: ";cout<<total<<endl;
  } 
}

//output is 40886
