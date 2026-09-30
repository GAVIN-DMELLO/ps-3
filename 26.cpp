#include<iostream>
using namespace std;

int main(){

  char a = 'A';

  for(int k=0 ; k<=2 ; k++){
    for(int i=1 ; i<=2-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=2*k+1 ; j++){
      cout<<a;
      a++;
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=1 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=3 ; j++){
  //   cout<<a;
  //   a++;
  // }
  // cout<<endl;


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j<=5 ; j++){
  //   cout<<a;
  //   a++;
  // }
  // cout<<endl;

  return 0;
}