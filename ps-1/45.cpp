#include<iostream>
#include<vector>
using namespace std;

int main(){

  int a[7] = {1,2,2,3,4,4,4};
  for(int i=0 ; i<7 ; i++){
    for(int j=0 ; j<7 ; j++){
      if(a[j]>a[j+1]){
        int temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }

  int count = 1;
  int mode = a[0];
  vector<int> c;
  vector<int> m;
  for(int i=1 ; i<7 ; i++){
    if(a[i] != mode){
      c.push_back(count);
      m.push_back(mode);
      count = 1;
      mode = a[i];
    }else{
      count++;
    }

    if(i == 6){
      c.push_back(count);
      m.push_back(mode);
      count = 1;
      mode = a[i];
    }
  }

  int maxfreq = c[0];
  int index = 0;
  for(int i=0 ; i<c.size() ; i++){
    if(c[i]>maxfreq){
      maxfreq = c[i];
      index = i;
    }
  }

  cout<<m[index]<<" ";

  return 0;
}