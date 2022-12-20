/*Given an integer array nums which may contain duplicatess, return all possible subsets (the power set).*/
//get all the subsets
//to avoid repeatiton use set instead of vector
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// bool comp(vector<int> a, vector<int> b){
//     if(a.size()==b.size())
//         return a<b;
    
//     return a.size()<b.size();
// }
void help(vector<int> nums,set<vector<int>>& answer, vector<int>& str,int i){
    //base case
    if(i==nums.size()){
        answer.insert(str);
        return;
    }
    str.push_back(nums[i]);
    help(nums,answer, str,i+1);
    str.pop_back();
    help(nums,answer, str,i+1);

}
vector<vector<int>> uniqueSubsets(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    set<vector<int>> answer;
    vector<int> str;
    help(nums, answer, str, 0);
    for(auto s: answer){
        ans.push_back(s);
    }
    sort(ans.begin(),ans.end());
    return ans;

}

int main(){
    vector<int> number={1,2,2};
    vector<vector<int>> ans= uniqueSubsets(number);
    for (int i = 0; i < ans.size(); i++)
    {  
        for (int j = 0; j <  ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }
        cout<<endl;
    }
    
}