/*Implement merge sort on  a 2d array*/

#include<bits/stdc++.h>
using namespace std;

void merge_row(vector<vector<int>> &mat,int i, int cs, int cm, int ce){
   vector<int> sorted;
   int x=cs;
   int y=cm+1;
   while(x<=cm && y<=ce){
       if(mat[i][x]<mat[i][y]){
           sorted.push_back(mat[i][x]);
           x++;
       }
       else{
           sorted.push_back(mat[i][y]);
           y++;
       }
   }
   
   
   while(x<=cm){
       sorted.push_back(mat[i][x]);
       x++;
   }
   while(y<=ce){
       sorted.push_back(mat[i][y]);
       y++;
   }
   int k=0;
   for(int j=cs; j<=ce; j++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}

void merge_col(vector<vector<int>> &mat,int j, int rs, int rm, int re){
       vector<int> sorted;
   int x=rs;
   int y=rm+1;
   while(x<=rm && y<=re){
       if(mat[x][j]<mat[y][j]){
           sorted.push_back(mat[x][j]);
           x++;
       }
       else{
           sorted.push_back(mat[y][j]);
           y++;
       }
   }
   while(x<=rm){
       sorted.push_back(mat[x][j]);
       x++;
   }
   while(y<=re){
       sorted.push_back(mat[y][j]);
       y++;
   }
   int k=0;
   for(int i=rs; i<=re; i++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}


void merge(int m, int n, vector<vector<int>> &mat, int rs, int rm, int re,int cs, int cm, int ce){
    
    
    
    //for sorting rows
    for(int i=rs; i<=re; i++){
        merge_row(mat,i,cs,cm,ce);
    }
    
    //for sorting columns
    for(int j=cs; j<=ce; j++){
        merge_col(mat,j,rs,rm,re);
    }
    return;

}

void merge(int m, int n,vector<vector<int>> &v, int rs, int re, int cs, int ce){
    int Rmid=(rs+re)/2;
    int Cmid=(cs+ce)/2;

    //merge rowwise
    for(int i=rs; i<=re; i++){
        merge_row(v,i,cs,Cmid,ce);
    }
    
    //merge column wise
    for(int j=cs; j<=ce; j++){
        merge_col(v,j,rs,Rmid,re);
    }
    return;
    

}
//function to divide make partitions
void merge_sort(int m, int n,vector<vector<int>> &v, int rs, int re, int cs, int ce){
    
    if(rs>=re && cs>=ce){
        return;
    }

    int Rmid=(rs+re)/2;
    int Cmid=(cs+ce)/2;

    merge_sort(m,n, v, rs, Rmid, cs, Cmid);
    merge_sort(m,n, v, rs, Rmid, Cmid+1, ce);
    merge_sort(m,n, v, Rmid+1, re, cs, Cmid);
    merge_sort(m,n, v, Rmid+1, re, Cmid+1, ce);

    //merge subarrays
    merge(m,n,v,rs,re,cs,ce);
}

vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    //you need start and end position
    merge_sort(m,n,v,0, m-1,0,n-1);
    return v;
}
