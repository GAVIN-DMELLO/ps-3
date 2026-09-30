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