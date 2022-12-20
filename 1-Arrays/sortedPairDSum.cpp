#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int sum=0;
    int x,y;
    int min_diff=INT_MAX, diff;
    // your code goes here
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            sum=arr[i]+arr[j];
            diff= abs(x-sum);
            if(diff<min_diff){
                min_diff=diff;
                x=arr[i];
                y=arr[j];
            }

        }
        
    }
    return make_pair(x,y);
    
}