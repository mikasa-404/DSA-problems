#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<int> nextGreater(vector<int> v){
    stack<int> s; 
  int n=v.size();
  vector<int> ans(n,0);
  for (int i = n-1; i >=0; i--)
  {
    while(!s.empty() && s.top()<=v[i])
    s.pop();

    if(s.empty())
    ans[i]=-1;
    else
    ans[i]=s.top();


    s.push(v[i]);
  }
   return ans;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> greater= nextGreater(nums2);  
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                ans.push_back(greater[j]);
            }
            
        } 
    return ans;
    }
};