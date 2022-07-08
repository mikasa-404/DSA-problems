/*Given a mxn grid, find number of ways to reach bottom right corner starting from top left*/
#include<iostream>
using namespace std;

int gridWays(int m, int n, int i, int j){
    //base case
    if(i==m-1 && j==n-1)
        return 1;

    //rec case
    if(i==m-1){
    return gridWays(m, n, i, j+1);
    }
    else if(j==n-1){
    return gridWays(m, n, i+1, j);
    }
    else{
        return gridWays(m, n, i+1, j)+gridWays(m,n, i,j+1);
    }
    
}

int main(){
    int m=3;
    int n=3;
    cout<<gridWays(m,n,0,0);
}