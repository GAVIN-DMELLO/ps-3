// #include<iostream>
// using namespace std;

// int main(){

//   for(int k=0 ; k<=1 ; k++){
//     for(int i=1 ; i<=3-k ; i++){
//       cout<<" ";
//     }
//     for(int j=1 ; j<=k+1 ; j++){
//       cout<<1<<" ";
//     }
//     cout<<endl;
//   }


//   for(int i=1 ; i<=1 ; i++){
//     cout<<" ";
//   }
//   for(int j=1 ; j<=2 ; j++){
//     cout<<j<<" ";
//   }
//   for(int j=1 ; j>=1 ; j--){
//     cout<<j;
//   }
//   cout<<endl;


//   for(int i=1 ; i<=0 ; i++){
//     cout<<" ";
//   }
//   for(int j=1 ; j<=3 ; j=j+2){
//     cout<<j<<" ";
//   }
//   for(int j=3 ; j>=1 ; j=j-2){
//     cout<<j<<" ";
//   }
//   cout<<endl;


  


//   // for(int i=1 ; i<=2 ; i++){
//   //   cout<<"#";
//   // }
//   // for(int j=1 ; j<=2 ; j++){
//   //   cout<<1<<" ";
//   // }
//   // cout<<endl;




//   return 0;
// }











#include<iostream>
using namespace std;

int main(){

  for(int k=0 ; k<=1 ; k++){

    for(int i=1 ; i<=3-k ; i++){
      cout<<" ";
    }
    for(int j=1 ; j<=k+1 ; j++){
      cout<<1<<" ";
    }
    cout<<endl;
  }

  cout<<" ";


  for(int i=1 ; i<=2 ; i++){
    cout<<1;
    for(int j=1 ; j<=i ; j++){
      cout<<" "<<i+1;
    }
    cout<<" "<<1;
    cout<<endl;
  }
  

  // cout<<1;
  // for(int j=1 ; j<=2 ; j++){
  //   cout<<" "<<3;
  // }
  // cout<<" "<<1;
  // cout<<endl;


  return 0;
}