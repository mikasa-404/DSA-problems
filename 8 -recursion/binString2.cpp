/*Given an integer n.Count number of binary strings of size n without consecutive 1’s using recursion*/

#include<bits/stdc++.h>
using namespace std;

int binaryStrings(int n){
    if(n==1)
        return 2;
    if(n==2)
        return 3;
    
    return binaryStrings(n-1)+ binaryStrings(n-2);
    
}

int main(){
    int anss = binaryStrings(3);
    cout<<anss;

    return 0;
}
