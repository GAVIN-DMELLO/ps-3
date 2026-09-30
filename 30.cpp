#include<iostream>
using namespace std;

int main(){

  // for(int i=1 ; i<=5 ; i++){
  //   cout<<"*"<<" ";
  // }
  // cout<<endl;


  for(int k=0 ; k<=4 ; k++){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=5-k ; j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }



  for(int k=1 ; k<=4 ; k++){
    for(int i=1 ; i<=4-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=k+1 ; j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  



  // for(int i=1 ; i<=3 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=2 ; j++){
  //   cout<<"*"<<" ";
  // }
  // cout<<endl;






  // for(int i=1 ; i<=2 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=3; j++){
  //   cout<<"*"<<" ";
  // }
  // cout<<endl;


  // for(int i=1 ; i<=3 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=2; j++){
  //   cout<<"*"<<" ";
  // }
  // cout<<endl;


  // for(int i=1 ; i<=4 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=1; j++){
  //   cout<<"*"<<" ";
  // }
  // cout<<endl;




  return 0;
}