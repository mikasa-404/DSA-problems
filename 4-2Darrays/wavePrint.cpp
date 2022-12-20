/*Given a matrix, print its revers ewave form*/
#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    int cnt=0;
    vector <int> ans;
    for (int col = n-1; col>=0; col--)
    {
        cnt++;
        if(cnt%2==0){
            for (int row = m-1; row>=0; row--)
            {
                ans.push_back(arr[row][col]);
            }          
        }       
        else{
            
            for (int row = 0; row<=m-1; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
    
}
int main()
{

    vector<vector<int>> matrix1={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m=matrix1.size();
    int n=matrix1[0].size();
    vector <int> ans=WavePrint(m,n,matrix1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}