#include<iostream>
using namespace std;

int main(){

  for(int i=1 ; i<=2 ; i++){
    cout<<" ";
  }
  for(int j=1 ; j<=1 ; j++){
    cout<<j;
  }
  cout<<endl;

  for(int k=0 ; k<=1 ; k++){
    for(int i=1 ; i<=1-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=k+2 ; j++){
      cout<<j;
    }
    for(int j=k+1 ; j>=1 ; j--){
      cout<<j;
    }
    cout<<endl;
  }


  for(int i=1 ; i<=1 ; i++){
    cout<<" ";
  }
  for(int j=1 ; j<=2 ; j++){
    cout<<j;
  }
  for(int j=1 ; j>=1 ; j--){
    cout<<j;
  }
  cout<<endl;


  for(int i=1 ; i<=2 ; i++){
    cout<<" ";
  }
  for(int j=1 ; j<=1 ; j++){
    cout<<j;
  }
  cout<<endl;

  


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<"%";
  // }
  // for(int j=1 ; j<=3 ; j++){
  //   cout<<j;
  // }
  // for(int j=2 ; j>=1 ; j--){
  //   cout<<j;
  // }
  


  return 0;
}