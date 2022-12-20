//previous smallest array
//next smallest
//for eacg bar compute max of area=(ns-ps-1)*arr[i]
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> ps= prevSmallest(heights);
        vector<int> ns= nextSmallest(heights);
        // cout<<"\n previous: ";
        // for(int i = 0; i < ps.size(); i++){
        //     cout<<ps[i]<<" ";
        // }        
        // cout<<"\n next: ";

        // for(int i = 0; i < ns.size(); i++){
        //     cout<<ns[i]<<" ";
        // }

        int i=0;
        int max_area=0;
        while (i<n)
        {
            int temp=(ns[i]-ps[i]-1)*heights[i];
            max_area=max(temp, max_area);
            i++;
        }
       return max_area; 

    }
    //previous smallest index function
    vector<int> prevSmallest(vector<int> v ){
        //logic for prev smallest
        //iterate from 0 to n-1
        //consider a stack s while stack is non-empty and elt at index top>=v[i]
        //if stack empty ans[i]=-1 index
        //else ans[i]=index of v[i] i.e. i
        //push into stack v[i]
        stack<int> s;
        int n=v.size();
        vector<int> ans(n,0);
        for (int i = 0; i < v.size(); i++)
        {
            while (!s.empty() && v[s.top()]>=v[i])
            s.pop();

            if(s.empty())
            ans[i]=-1;
            else
            ans[i]=s.top();

            s.push(i);
            
        }
        return ans;

    }
    vector<int> nextSmallest(vector<int> v ){
        //logic for prev smallest
        //iterate from 0 to n-1
        //consider a stack s while stack is non-empty and elt at index top>=v[i]
        //if stack empty ans[i]=-1 index
        //else ans[i]=index of v[i] i.e. i
        //push into stack v[i]
        stack<int> s;
        int n=v.size();
                vector<int> ans(n,0);

        for (int i = n-1; i >=0; i--)
        {
            while (!s.empty() && v[s.top()]>=v[i])
            s.pop();

            if(s.empty())
            ans[i]=n;
            else
            ans[i]=s.top();

            s.push(i);
            
        }
        return ans;

    }
    };
    int main(){
        Solution s;
        vector<int> h={2,1,5,6,2,3};
        cout<<s.largestRectangleArea(h);
    }