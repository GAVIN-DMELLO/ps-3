#include<iostream>
using namespace std;

int main(){

  char a = 'X';

  for(int k=1 ; k<=3 ; k++){
    for(int i=k%2 ; i<=2+k%2 ; i++){
      if(i%2 == 1){
        a = 'X';
      }
      else{
        a = 'O';
      }
      cout<<a;
    }
    cout<<endl;
  }
  


  
  // for(int i=0 ; i<=2 ; i++){
  //   if(i%2 == 1){
  //     a = 'X';
  //   }
  //   else{
  //     a = 'O';
  //   }
  //   cout<<a;
  // }
  // cout<<endl;


  
  // for(int i=1 ; i<=3 ; i++){
  //   if(i%2 == 1){
  //     a = 'X';
  //   }
  //   else{
  //     a = 'O';
  //   }
  //   cout<<a;
  // }
  // cout<<endl;




  return 0;
}