#include <iostream>
using namespace std;
//  int Sum(int n){
//      if(n ==0){
//          return 0;
//      }
//     int ans = Sum(n-1);
//     return n + ans;
//  }


// int powerofn(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int ans = powerofn(n,p-1);

//     return n*ans;
// }

// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int ans = fact(n-1);
//     return n*ans;
// }

int fibo( int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    return fibo(n-1) + fibo(n-2);
}
int main() {
   
    //cout<<Sum(n)<<endl;
    //cout<<powerofn(4,3);
    //cout<<fact(5);
    cout<<fibo(7);
}
