#include<iostream>
using namespace std;

int main(){

  int a[5] = {10,20,4,45,99};

  int max = a[0];
  for(int i=0 ; i<5 ; i++){
    if(a[i]>max){
      max = a[i];
    }
  }

  int secondmax = a[0];
  for(int j=0 ; j<7 ; j++){
    if(a[j]>secondmax && a[j]!=max){
      secondmax = a[j];
    }
  }

  cout<<secondmax<<" ";

  return 0;
}