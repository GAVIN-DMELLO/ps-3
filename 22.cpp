#include<iostream>
using namespace std;

int main(){

  for(int k=0 ; k<=2 ; k++){
    for(int i=1 ; i<=2-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=2*k+1 ; j++){
      cout<<"*";
    }
    cout<<endl;
  }


  for(int k=2 ; k>=1 ; k--){
    for(int i=1 ; i<=3-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=2*k-1 ; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=2 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=1 ; j++){
  //   cout<<"*";
  // }
  // cout<<endl;

  return 0;
}