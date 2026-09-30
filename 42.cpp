#include<iostream>
using namespace std;

int main(){


  char a = 'A';
  for(int k=1 ; k<=3 ; k++){
    for(int i=k%2 ; i<=3+k%2 ; i++){
      if(i%2 == 1){
        a = 'A';
      }else{
        a = 'B';
      }
      cout<<a;
    }
    cout<<endl;
  }
  
  

  return 0;
}