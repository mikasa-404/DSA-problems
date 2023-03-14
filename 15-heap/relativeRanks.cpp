#include<bits/stdc++.h>
#include<queue>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<int> pq;
        for(int x: score){
            pq.push(x);
        }
        map<int, string> mp;
        for(int i=1; i<=score.size();i++){
            string st;
            if(i==1) st="Gold Medal";
            else if(i==2) st="Silver Medal";
            else if(i==3) st="Bronze Medal";
            else
            st=to_string(i);
            mp[pq.top()]=st;
            pq.pop();
        }
        vector<string> ans;
        for(int x: score){
            ans.push_back(mp[x]);
        }
        return ans;


    }
};