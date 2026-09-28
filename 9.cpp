#include<iostream>
using namespace std;


int main(){


  int num = 1;

  for(int j=1 ; j<=4 ; j++){
    for(int i=1 ; i<=j ; i++){
      cout<<num;
      num++;
    }
    cout<<endl;
  }
  

  return 0;
}