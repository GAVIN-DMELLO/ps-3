#include<iostream>
using namespace std;

int main(){

  char alpha='A';
  for(int i=1 ; i<=3 ; i++){
    for(int j=1 ; j<=i ; j++){
      cout<<alpha;
    }
    alpha += 1;
    cout<<endl;
  }

  return 0;
}