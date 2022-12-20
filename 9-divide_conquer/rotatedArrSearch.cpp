/*A sorted array of integers: nums is possibly rotated at an unknown pivot index
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.
*/

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int s=0;
    int e= nums.size()-1;
    while(s<=e){
        //find mid
        int mid=(s+e)/2;
        //if mid element is equal to key then found !!!
        if(nums[mid]==target)
            return mid;
        //check if mid lies on left portion or right
        //left case
        if(nums[mid]>=nums[s]){
            //two cases in left
            if((target>=nums[s])&&( target<=nums[mid])){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        //right case
        else{
            //two cases in right
            if((target>=nums[mid])&&( target<=nums[e])){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

    }
    return -1;
}