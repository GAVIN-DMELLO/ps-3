#include<iostream>
using namespace std;

int main(){

  char alpha;
  for(int i=1 ; i<=4 ; i++){
    bool num = i%2;
    for(int j=1 ; j<=6 ; j++){
      if(num == 1){
        alpha = 'X';
      }else if(num == 0){
        alpha = 'O';
      }
      cout<<alpha;
      num = !num;
    }
    cout<<endl;
  }

  return 0;
}