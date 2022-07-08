#include<iostream>
using namespace std;
void printBoard(int n, int board[][20]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
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

bool nqueen(int i, int n, int board[][20]){
    //base case
    //you place queen in all rows then print board
    if(i==n){ 
        printBoard(n,board);
        return true;
    }

    //rec case
    //in each row we place a queen, and check for next row i+1, if you can place queen
    for(int j=0; j<n ; j++){
        //check if current i, j is safe
        if(success(n,board, i, j)){
            board[i][j]=1; //place queen
            if(nqueen(i+1,n, board)){
                return true; 
                //if next row has queen in correct position return true and continue;
            }

            //backtracking step
            //if we cannot place queen, make i,j position 0 and go to next position in row 
            board[i][j]=0; 
        }
        

    }
    //if you can't place queen anywhere in row, it means configuration is wrong return false and check for previous row
    return false; 
}
int main(){
    int board[20][20]={0};
    int n=5;
    nqueen(0,n,board);

}