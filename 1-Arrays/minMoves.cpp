#include<bits/stdc++.h>
using namespace std;

//approach 1 (tle)
    int minMoves2(vector<int>& nums) {

        //find sum od diff 
        //min sum is answer
        int ans=INT_MAX;
        for(int i=0; i<nums.size();i++){
            int sum=0;
            for (int j = 0; j < nums.size(); j++)
            {
                int diff=abs(nums[i]-nums[j]);
                sum+=diff;
            }
            ans=min(ans,sum);
            
        }
        return ans;

    }
//approach 2
  int minMoves(vector<int>& nums) {

        //find sum od diff 
        //min sum is answer
        int ans=0;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int median=nums[n/2];
        for (int i = 0; i < n; i++)
        {
            ans+=abs(nums[i]-median);
        }
        
        return ans;
    }
int main(){
    vector<int> a={1,10,2,9};
    cout<<minMoves(a);
}