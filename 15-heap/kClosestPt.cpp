#include<iostream>
#include<queue>
using namespace std;
class compare{
public:
bool operator()(pair<vector<int>, int> p1, pair<vector<int>, int> p2){
    return p1.second<p2.second;
}
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>, compare> pq;

        for (int i = 0; i < k; i++)
        {
            int dist=0;
            vector<int> x;
            for (int j = 0; j < 2; j++)
            {
                x.push_back(points[i][j]);
                dist+= (points[i][j]* points[i][j]);
            }
            pq.push({x, dist});   
        }
        vector<vector<int>> ans;
        while(k>0){
            ans.push_back(pq.top().first);
                        pq.pop();

            k--;
        }
    }
};