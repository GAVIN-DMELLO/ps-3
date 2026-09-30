#include<iostream>
using namespace std;

int main(){

  for(int k=2 ; k>=0 ; k--){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int i=1 ; i<=3-k ; i++){
      cout<<i;
    }
    for(int i=3-k-1 ; i>=1 ; i--){
      cout<<i;
    }
    cout<<endl;
  }
  

  for(int k=1 ; k<=2 ; k++){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int i=1 ; i<=3-k ; i++){
      cout<<i;
    }
    for(int i=3-k-1 ; i>=1 ; i--){
      cout<<i;
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=2 ; i++){
  //   cout<<" ";
  // }
  // for(int i=1 ; i<=1 ; i++){
  //   cout<<i;
  // }
  // for(int i=0 ; i>=1 ; i--){
  //   cout<<i;
  // }



  // for(int i=1 ; i<=1 ; i++){
  //   cout<<" ";
  // }
  // for(int i=1 ; i<=2 ; i++){
  //   cout<<i;
  // }
  // for(int i=1 ; i>=1 ; i--){
  //   cout<<i;
  // }
  // cout<<endl;


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<" ";
  // }
  // for(int i=1 ; i<=3 ; i++){
  //   cout<<i;
  // }
  // for(int i=2 ; i>=1 ; i--){
  //   cout<<i;
  // }
  // cout<<endl;


  return 0;
}