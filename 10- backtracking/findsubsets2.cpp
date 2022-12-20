/*Given an integer array nums of unique elements, return all possible subsets (the power set).*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helpt(vector<int>& nums,int i, vector<int> &helper, vector<vector<int>> &ans){
   if(i==nums.size()){
        ans.push_back(helper);
        return;
   }
   helper.push_back(nums[i]);
   helpt(nums, i+1, helper, ans);
   //since we are not overwriting but using push_back, we will have to pop it back before inserting new element.
   helper.pop_back();
   helpt(nums,i+1,helper, ans);

}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> help;
        helpt(nums,0,help, ans);
        return ans;
        
    }
int main(){
    vector<int> nums= {1,2,3};
    vector<vector<int>> subsetss=subsets(nums);
    for (int i = 0; i < subsetss.size(); i++)
    {
        for (int j = 0; j <  subsetss[i].size(); j++)
        {
            cout<<subsetss[i][j]<<",";
        }
        cout<<endl;
    }
    return 0;
}