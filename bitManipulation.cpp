#include <iostream>
using namespace std;
    // int getBit(int n,int pos){
    //      return ((n & (1<<pos)) !=0);
    // }
    // int setBit( int n,int pos){
    //     return (n | (1<<pos));
    // int clearBit(int n,int pos){
    //     int mask = ~(1<<pos);
    //     return (n & mask);
    int updateBit(int n,int pos){
        int mask= ~(1<<pos);
        int n1= n & mask;
        return(n1 | (1<<pos));
    }
    
    int main(){
        cout<<updateBit(5,1);
        // cout<<clearBit(5,2);   
        // cout<<setBit(5,1)<<endl;
        // cout<<getBit(5,2)<<endl;
        return 0;
    }


