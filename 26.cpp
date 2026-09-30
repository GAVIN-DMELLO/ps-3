#include<iostream>
using namespace std;

int main(){

  char a = 'A';
  for(int j=1 ; j<=4 ; j++){
    for(int i=j%2 ; i<=3+j%2 ; i++){
      if(i%2 == 1){
        a = 'A';
      }else{
        a = 'B';
      }
      cout<<a;
    }
    cout<<endl;
  }
  



  // for(int i=0 ; i<=3 ; i++){
  //   if(i%2 == 1){
  //     a = 'A';
  //   }else{
  //     a = 'B';
  //   }

  //   cout<<a;
  // }
  // cout<<endl;


  // for(int i=1 ; i<=4 ; i++){
  //   if(i%2 == 1){
  //     a = 'A';
  //   }else{
  //     a = 'B';
  //   }

  //   cout<<a;
  // }
  // cout<<endl;



  // for(int i=0 ; i<=3 ; i++){
  //   if(i%2 == 1){
  //     a = 'A';
  //   }else{
  //     a = 'B';
  //   }

  //   cout<<a;
  // }
  // cout<<endl;

  return 0;
}