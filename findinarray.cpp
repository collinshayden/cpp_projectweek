#include <iostream>

using namespace std;

int main()
{
  int num_to_find = 2;
  int arr[5] = {5,4,1,2,6};
  size_t arrsize = sizeof(arr) / sizeof(int);
  int *end = arr + arrsize;
  int *result = find(arr,end,num_to_find);
  if (result == end){//if element is not in array
    cout<<"not in arr"<<endl;
  }
  else {
    cout<<"in arr at index "; cout<<distance(arr,result)<<endl;//if element is in array
  }

}