#include <iostream>
using namespace std ;

int summation(int array[],int n){
  int sum=0;
  for ( int i=0 ; i<n ; i++ )
    sum += array[i];
  return sum;
}

int main() {
  int array[5]={1,-2,9,5,7};
  int sum=0;
  for(int i=0;i<5;i++)
    sum=sum+array[i];
  cout <<"SumOne="<< sum <<"\n";
  int k= summation(array,5);
  cout <<"SumTwo="<< k;
}
