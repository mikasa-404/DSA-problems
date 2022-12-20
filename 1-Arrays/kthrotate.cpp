
#include<bits/stdc++.h>
using namespace std;

//approach1
vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    vector<int> v;
    int n = a.size();
    k = k % n;
    for(int i = 0; i < n; i++)
    {
       if(i < k){
           v.push_back(a[n + i - k]);
       }
       else{
           v.push_back(a[i - k]);
       }
    }
    return v;
}

//approach2 reverse the array
vector <int> krotate2(vector<int> nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        return nums;
    }

int main(){
    vector<int> a={1,2,3,4,5,6,7};
    int k=3;
    vector<int> ans= krotate2(a,k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}