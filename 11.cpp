#include<iostream>
using namespace std;

int main(){

  for(int j=0 ; j<=3 ; j++){
    bool num = j%2;
    for(int i=1 ; i<=4 ; i++){
      cout<<num;
      num = !num;
    }
    cout<<endl;
  }
  

  // num = 1;
  // for(int i=1 ; i<=4 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;
  

  // num = 0;
  // for(int i=1 ; i<=4 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;


  // num = 1;
  // for(int i=1 ; i<=4 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;

  return 0;
}