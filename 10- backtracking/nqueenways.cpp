
#include<iostream>
using namespace std;


bool success(int n, int board[][20], int i, int j){
    //col above
    
    for (int k = 0; k < i; k++)
    {
        if(board[k][j]==1)
            return false;
    }
    
    //left diagnol
    int x=i;
    int y=j;
    while (i>=0 && j>=0)
    {
        if(board[i][j]==1)
            return false;

        i--;
        j--;
    }
    
    //right diagnol
    while (x>=0 && y<=n-1)
    {
        if(board[x][y]==1)
            return false;

        x--;
        y++;
    }
    return true;
}

int nqueen(int i, int n, int board[][20]){
    //base case
    //you place queen in all rows then print board
    if(i==n){ 
        return 1;
    }
    int ways=0;
    //rec case
    //in each row we place a queen, and check for next row i+1, if you can place queen
    for(int j=0; j<n ; j++){
        //check if current i, j is safe
        if(success(n,board, i, j)){
            board[i][j]=1; //place queen

            //you place queen at each position and check if it returns 1, i.e. it gives a possible config add 1
            ways+=nqueen(i+1,n, board);//each row will give total ways

            //backtracking step
            //if we cannot place queen, make i,j position 0 and go to next position in row 
            board[i][j]=0;   
        }
        
    }
    return ways;
}
int main(){
    int board[20][20]={0};
    int n=8;
    cout<<nqueen(0,n,board);

}