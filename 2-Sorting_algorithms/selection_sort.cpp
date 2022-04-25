 
 #include<iostream>
#include<vector>
using namespace std;

//insertion sort
void sortArray(vector<int>& nums) {
    int n=nums.size();
	for(int i=0; i<n-1; i++){
        int min_pos=i;
        for (int j = i; j<n; j++)
        {
            if(nums[j]<nums[min_pos])
            min_pos=j;
        }
        swap(nums[min_pos], nums[i]);
	}  
}

int main()
{
    vector <int> arr={1,10,1,15,7, 9, 2};
    

    sortArray(arr);

    //output the sorted array
    cout<<"Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  
    return 0;
}
