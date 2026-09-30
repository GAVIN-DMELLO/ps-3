#include<iostream>
using namespace std;


int main(){

  for(int k=2 ; k>=0 ; k--){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=3-k ; j++){
      cout<<j;
    }
    for(int j=3-k-1 ; j>=1 ; j--){
      cout<<j;
    }
    cout<<endl;
  }


  for(int k=1 ; k<=2 ; k++){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=3-k ; j++){
      cout<<j;
    }
    for(int j=3-k-1 ; j>=1 ; j--){
      cout<<j;
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=2 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=1 ; j++){
  //   cout<<j;
  // }
  // for(int j=0 ; j>=1 ; j--){
  //   cout<<j;
  // }
  


  // for(int i=1 ; i<=1 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=2 ; j++){
  //   cout<<j;
  // }
  // for(int j=1 ; j>=1 ; j--){
  //   cout<<j;
  // }
  // cout<<endl;


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=3 ; j++){
  //   cout<<j;
  // }
  // for(int j=2 ; j>=1 ; j--){
  //   cout<<j;
  // }
  // cout<<endl;

  return 0;
}