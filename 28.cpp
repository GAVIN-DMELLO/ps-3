#include<iostream>
using namespace std;

int main(){

  char a = 'A';

  for(int i=1 ; i<=1 ; i++){
    cout<<a;
  }
  a++;
  cout<<endl;


  for(int k=1 ; k<=3 ; k++){
    for(int i=1 ; i<=1 ; i++){
      cout<<a;
    }
    for(int j=1 ; j<=k ; j++){
      cout<<" ";
    }
    for(int i=1 ; i<=1 ; i++){
      cout<<a;
    }
    a++;
    cout<<endl;
  }
  


  // for(int i=1 ; i<=1 ; i++){
  //   cout<<a;
  // }
  // for(int j=1 ; j<=2 ; j++){
  //   cout<<" ";
  // }
  // for(int i=1 ; i<=1 ; i++){
  //   cout<<a;
  // }
  // a++;
  // cout<<endl;


  // for(int i=1 ; i<=1 ; i++){
  //   cout<<a;
  // }
  // for(int j=1 ; j<=3 ; j++){
  //   cout<<" ";
  // }
  // for(int i=1 ; i<=1 ; i++){
  //   cout<<a;
  // }
  // cout<<endl;

  return 0;
}