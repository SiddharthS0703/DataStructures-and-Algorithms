#include <iostream>
#include <string>
using namespace std;
// void permutation(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;;
//     }
    
//     for(int i=0;i<s.length();i++){
//         char ch= s[i];
//         string ros = s.substr(0,i)+ s.substr(i+1);
//         permutation(ros,ans+ch);             //0 here indicates the starting point of string and i is the length
//     }
// }

// int countPath(int s, int e){
//     if(s==e){
//         return 1; 
//     }
//     if(s>e){
//         return 0;
//     }
//     int count=0;
//     for(int i=1;i<=6;i++){
//          count += countPath(s+i,e);
//     }
//     return count;
// }

int countPathMaze(int n, int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countPathMaze( n,i+1,j) + countPathMaze(n,i,j+1);
}
int main() {
   //permutation("ABC","");
   //cout<<countPath(0,3)<<endl;
   cout<<countPathMaze(3,0,0)<<endl;
//    return 0;
}
