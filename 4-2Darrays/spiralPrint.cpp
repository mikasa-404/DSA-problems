#include<iostream>
#include<vector>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int srow=0, erow=matrix.size()-1, scol=0, ecol=matrix[0].size()-1;
    vector<int>  ans;
    //top row
    while (srow<=erow && scol<=ecol)
    {
        for (int col = scol; col<=ecol; col++)
    {
        ans.push_back(matrix[srow][col]);
    }
    
    //last col
    for (int row = srow+1; row <=erow; row++)
    {
        ans.push_back(matrix[row][ecol]);
    }
    //bottom row
    for (int col = ecol-1; col>=scol; col--)
    {
        if(erow==srow)
            break;

        ans.push_back(matrix[erow][col]);
    }

    //firstcol
    for (int row = erow-1; row >=srow+1; row--)
    {
        if(ecol==scol)
            break;
        ans.push_back(matrix[row][scol]);
    }
    
    scol++;
    ecol--;
    srow++;
    erow--;
    }
    return ans;
    
}

int main()
{

    vector<vector<int>> matrix1={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    vector <int> ans=spiralOrder(matrix1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}
