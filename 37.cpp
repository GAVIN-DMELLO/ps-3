#include<iostream>
using namespace std;

int main(){

  for(int i=0 ; i<=2 ; i++){
    for(int j=1 ; j<=2-i ; j++){
      cout<<" ";
    }
    for(int k=1 ; k<=2*i+1 ; k++){
      cout<<"*";
    }
    cout<<endl;
  }


  for(int i=2 ; i>=1 ; i--){
    for(int j=1 ; j<=3-i ; j++){
      cout<<" ";
    }
    for(int k=1 ; k<=2*i-1 ; k++){
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}