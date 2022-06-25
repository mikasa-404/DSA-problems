#include<iostream>
using namespace std;

//1. Check even and odd
void checkEvenOdd(int x){
    ( x&1 ) ? cout<<"Odd"<<endl : cout<<"Even"<<endl;
}

//2.Get ith bit
int getIthbit(int n,int i){
    int mask= 1<<i;
    return (n&mask)>0? 1 : 0;
}

//3. Set ith bit
void setIthbit(int &n, int i){    //this will change set the ith bit in original value of n
    int mask=1<<i;
    n=(n|mask) ; 
}

//Driver function
int main(){
    
    int n=5;  //binary representation 101
    cout<<"Value of n: "<<n<<endl;
    checkEvenOdd(n);   //Odd
    cout<<"Second bit: "<<getIthbit(n,2)<<endl;       //1

    setIthbit(n, 1);
    cout<<"After Set first bit, n: "<<n<<endl;
    
    return 0;
}