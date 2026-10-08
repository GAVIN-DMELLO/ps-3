#include<iostream>
using namespace std;

int main(){

  int arr[10] = {1,2,3,4,5,6,7};

  int larg = arr[0];
  int min = arr[0];

  for(int i=1 ; i<10 ; i++){
    if(arr[i] >= larg){
      larg = arr[i];
    }

    if(arr[i] <= min){
      min = arr[i];
    }
  }


  cout<<larg<<" "<<min<<" ";


  return 0;
}