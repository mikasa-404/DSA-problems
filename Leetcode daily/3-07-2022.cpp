#include<iostream>
#include<vector>
using namespace std;

int wiggleMaxLength(vector<int>& nums) {
    vector<int> diff;
    int ans=1;
   for (int i = 0; i < nums.size()-1; i++)
   {   
        diff.push_back(nums[i+1]-nums[i]);
   }
   for (int i = 0; i <diff.size()-1; i++)
   {
        if((diff[i]<0 && diff[i+1]>0) or (diff[i]>0 && diff[i+1]<0))
            ans++;
        else 
        continue;

   }
   return ans+1;
   
   

        
}

int main(){
    //vector<int> nums={1,7,4,9,2,5};
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    cout<<wiggleMaxLength(nums);
    
}