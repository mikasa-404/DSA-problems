#include<bits/stdc++.h>
#include<queue>
using namespace std;
class compare{
    public:
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        //first is index //second is number of soldiers
        if(p1.second==p2.second)
            return p1.first>p2.first;

        return p1.second>p2.second;
    }
};
// class compare {
//     public:
// bool operator()(pair <int, int>p1, pair<int, int> p2){
//     return p1.second<p2.second;
// }

// };
class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue <pair<int, int>, vector<pair<int, int>>, compare> pq;
        for (int i = 0; i < mat.size(); i++)
        {
            int cnt=0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j]==1)
                    cnt++;       
            }
            pq.push({i, cnt});
        }
        vector<int> ans;
        while (k>0)
        {
            pair<int, int> x= pq.top();
            ans.push_back( x.first);
            pq.pop();
            k--;
        }
        return ans;
        
    }
};
