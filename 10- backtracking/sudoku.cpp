#include<iostream>
using namespace std;
void printboard(int board[][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

bool canPlace(int board[][9], int i, int j, int num){
    //check for row
    for(int k=0;k<9;k++)
    {
        if(board[i][k]==num)
            return false;
    }
    //check for col
    for(int k=0;k<9;k++)
    {
        if(board[k][j]==num)
            return false;
    }
    //check for current sub-matrix
    //sx and sy are starting position of sub-matrix from sx,sy to sx+3,sy+3
    int sx=(i/3)*3;
    int sy=(j/3)*3;
    for(int k=sx;k<sx+3;k++)
    {
        for(int l=sy;l<sy+3;l++)
        {
            if(board[k][l]==num)
                return false;
        }
    }
    return true;
}

bool sudokuSolve(int a[][9], int n, int i, int j){
    //base case
    //if you reach the end of row then return true and print the board
    if(i==n){
        printboard(a);
        return true;
    }
    //rec case
    //if you reach the end of the col, i.e. j==9 then move to next row 
    if(j==n){
        return sudokuSolve(a,n,i+1,0);
    }
    //if position is already filled move to next position
    if(a[i][j]!=0){
        return sudokuSolve(a,n,i,j+1);
    }
    //if the current cell is empty then fill it with 1 to 9 and check if it is valid
    for (int k = 1; k <= 9; k++)
    {
        if(canPlace(a,i,j,k)){
            a[i][j]=k;
            //if it is valid then move to next position
            if(sudokuSolve(a,n,i,j+1)){
                return true; 
                //if it is valid then return true and if not get back and continue the loop for other value from 1 to 9 for prev position
            }

        }
    }
    //backtracking step
    //if none of the values from 1-9 work, then there is mistake remove anything from current position and return false
    a[i][j]=0;
    return false;
    
}
int main(){
    int n = 9;
	int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};


        if(!sudokuSolve(mat,n,0,0)){
        	cout<<"No solution exists!";
        }
}