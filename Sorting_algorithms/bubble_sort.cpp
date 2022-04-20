#include<iostream>
#include<vector>
using namespace std;

//bubblesort function
void bubbleSort(vector<int>& nums) {
        int n=nums.size();
         //total n-1 iterations
        for(int i=0; i<n-1; i++){  

            for(int j=0;j<n-1-i; j++){   

                //if element is larger than adjacent move to right
                if(nums[j]>nums[j+1])
                    swap(nums[j], nums[j+1]);  
            }
        }
}

int main()
{
    vector <int> arr={1,10,1,15,7, 9, 2};
    

    bubbleSort(arr);

    //output the sorted array
    cout<<"Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  
    return 0;
}
