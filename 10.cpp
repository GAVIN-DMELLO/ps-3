#include<iostream>
using namespace std;

int main(){

  // for(int i=1 ; i<=2 ; i++){
  //   cout<<"%";
  // }
  // for(int j=1 ; j<=1 ; j++){
  //   cout<<j;
  // }
  // cout<<endl;


  for(int k=0 ; k<=2 ; k++){
    for(int i=1 ; i<=2-k ; i++){
      cout<<" ";
    }
    for(int j=k+1 ; j<=2*k+1 ; j++){
      cout<<j;
    }
    for(int j=2*k ; j>=k+1 ; j--){
      cout<<j;
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<"%";
  // }
  // for(int j=3 ; j<=5 ; j++){
  //   cout<<j;
  // }
  // for(int j=4 ; j>=3 ; j--){
  //   cout<<j;
  // }
  // cout<<endl;


  return 0;
}