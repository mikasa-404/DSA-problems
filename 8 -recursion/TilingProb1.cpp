/*Given a 4xn board and tiles of size 4x1, find number of ways to tile the given board
Tile can be placed vertically or horizontally*/

#include<iostream>
using namespace std;

int tilingWays(int n){
    if(n<=3)
        return 1;
    
    return tilingWays(n-1)+tilingWays(n-4);
}
int main(){

    int N;
    cin>>N;
    cout<<"No of ways = "<<tilingWays(N);
    return 0;
}