#include <iostream>
using namespace std;
// bool isSorted( int arr[],int n){
//     if( n==1){
//         return true;
//     }
//     bool ans = isSorted(arr+1,n-1);
//     return (arr[0]<arr[1] && ans);
// }

// void decrease(int n){
//     if(n==0){
//         return ;
//     }
//    cout<<n<<endl; 
//    decrease(n-1);
// }
// void increase(int n){
//     if(n==0){
//         return;
//     }
//     increase(n-1);
//     cout<<n<<endl;
    
// }

int firstOccur(int arr[],int n, int i , int key){
    if(i==n){
        return -1;
    }
    if(arr[i]== key){
        return i;
    }
    return firstOccur(arr,n,i+1,key);

} 
int lastOccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArr= lastOccur(arr,n,i+1,key);
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
     else{
         return -1;
     }
     
}
int main() {
    
    int arr[9]= {4,2,1,2,5,2,7};
    //cout<<isSorted(arr,9)<<endl;
    //decrease(9);
    //increase(9);
    cout<<firstOccur(arr,7,0,2)<<endl;
    cout<<lastOccur(arr,7,0,2)<<endl;
    return 0;
}
