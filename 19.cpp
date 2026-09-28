#include<iostream>
using namespace std;


int main(){

  char alpha = 'C';
  // for(int i=1 ; i<=0 ; i++){
  //   cout<<"#";
  // }
  // for(int j=3 ; j>=1 ; j--){
  //   cout<<alpha;
  // }
  // alpha -= 1;
  // cout<<endl;


  for(int k=0 ; k<=2 ; k++){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int j=3-k ; j>=1 ; j--){
      cout<<alpha;
    }
    alpha -= 1;
    cout<<endl;
  }
  



  // for(int i=1 ; i<=2 ; i++){
  //   cout<<"#";
  // }
  // for(int j=1 ; j>=1 ; j--){
  //   cout<<alpha;
  // }
  // alpha -= 1;
  // cout<<endl;

  return 0;
}