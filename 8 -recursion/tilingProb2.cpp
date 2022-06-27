/*Given a mxn board and n tiles of size mx1, find number of ways to tile the given board
Tile can be placed vertically or horizontally*/
#include<iostream>
using namespace std;

int tilingWays(int n, int m){
    if(n<=m-1)
        return 1;
    
    return tilingWays(n-1, m)+tilingWays(n-m, m);
}
int main(){

    int N, M;
    cin>>M>>N;
    cout<<"No of ways = "<<tilingWays(N,M);
    return 0;
}