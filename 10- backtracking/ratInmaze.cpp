#include<iostream>
#include<vector>
using namespace std;
//is safe function, it is safe if its inside the grid and position is not blocked
bool isSafe(int m, int n,vector<string> arr,vector<vector<int>>& ans, int i , int j ){
    if(i>=0 && i<m && j>=0 && j<n && arr[i][j]=='O'&& ans[i][j]!=1 ){
        return true;
    }
    return false;
}
//function to solve
bool solve (int m, int n, vector<string> arr,vector<vector<int>>& ans, int i, int j){
    //base case 
    if(i==m-1 && j==n-1){
        ans[i][j]=1;
        return true;
    }
    //rec case
    if(isSafe(m,n, arr, ans,i,j)){
        ans[i][j]=1;
        //down
        if(solve(m,n,arr, ans, i+1,j))
            return true;
        //right
        if(solve(m,n,arr, ans, i,j+1))
            return true;
         //left
        if(solve(m,n,arr, ans, i,j-1))
            return true;
        //up
         if(solve(m,n,arr, ans, i-1,j))
            return true;

        ans[i][j]=0;
        return false;
    }
    return false;
    
}
vector<vector<int>> ratAndMice(vector<string> arr) {
    int m=arr.size();
    int n=arr[0].size();
    vector<vector<int>> ans;
    //make all elements 0 in output vector
    for (int i = 0; i < m; i++)
    {   vector<int> help;
        for (int j = 0; j <n; j++)
        {
            help.push_back(0);
        }
        ans.push_back(help);
    }
    solve(m, n, arr, ans, 0, 0);
    return ans;
}
int main(){
    vector<string> arr={"OXOO","OOOX","XOXO","XOOX","XXOO"};
    vector<vector<int>> ans;
    ans = ratAndMice(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}