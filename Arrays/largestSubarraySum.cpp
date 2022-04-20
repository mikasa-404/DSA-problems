#include<iostream>
using namespace std;

//Using prefix sum approach, O(N^2) time complexity
int largestSubarraySum(int arr[], int n){

    //prefix array
    int pre_arr[n];
    pre_arr[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        pre_arr[i]=arr[i]+pre_arr[i-1];
    }

    int largest_sum=0;
    int subarray_sum;
    //largest sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j<n; j++)
        {
            subarray_sum= i>0 ? (pre_arr[j]-pre_arr[i-1]) : pre_arr[j];
        }
        largest_sum= max(subarray_sum,largest_sum);
        
    }
    
return largest_sum;

}

//Kadane's Algorithm, O(N) time complexity
int largestSubarraySum2(int arr[],int n){
    int current_sum=0;
    int largest_sum=0;
    for (int i = 0; i < n; i++)
    {
        current_sum+=arr[i];
        //make current_sum=0, if it is negative
        if(current_sum<0)
            current_sum=0;

        // update largest_sum, if current_sum is larger.
        largest_sum=max(largest_sum,current_sum);
        
    }
    
return largest_sum;
}

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the desired array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max= largestSubarraySum(arr, n);
    cout<<"The largest subarray sum is: "<<max<<endl;
    return 0;
}