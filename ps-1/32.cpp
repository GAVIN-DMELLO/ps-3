#include<iostream>
using namespace std;

int main(){

  int a[5] = {3,1,2,4,5};

  for(int i=0 ; i<5 ; i++){
    for(int j=i ; j<5 ; j++){
      if(a[j]>a[j+1]){
        int temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }

  for(int i=0 ; i<5 ; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;

  cout<<a[5]/2+1;

  return 0;
}