#include<iostream>
using namespace std;

int main(){

  // for(int i=1 ; i<=4 ; i++){
  //   cout<<i<<" ";
  // }
  // cout<<endl;

  // for(int i=8 ; i>=5 ; i--){
  //   cout<<i<<" ";
  // }
  // cout<<endl;

  // for(int i=9 ; i<=12 ; i++){
  //   cout<<i<<" ";
  // }
  // cout<<endl;



  int num=1 ;
  for(int i=1 ; i<=3 ; i++){
    if(i == 2){
      for(int j=8 ; j>=5 ; j--){
        cout<<j<<" ";
        num++;
      }
      cout<<endl;
    }else{
      for(int j=1 ; j<=4 ; j++){
        cout<<num<<" ";
        num++;
      }
      cout<<endl;
    }
    
  }

  return 0;
}