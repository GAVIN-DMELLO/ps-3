#include<iostream>
using namespace std;

int main(){

  int a[6] = {1,2,3,4,5,7};
  int max=a[0];

  for(int i=0 ; i<6 ; i++){
    if(a[i]>max){
      max = a[i];
    }
  }


  int sum1 = 0;
  for(int i=1 ; i<=max ; i++){
    sum1 += i;
  }

  int sum2 = 0;
  for(int i=0 ; i<6 ; i++){
    sum2 += a[i];
  }

  cout<<sum1 - sum2<<endl;

  


  return 0;
}