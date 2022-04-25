 
 #include<iostream>
#include<vector>
using namespace std;

//insertion sort
void sortArray(vector<int>& nums) {
    int n=nums.size();
	for(int i=1; i<=n-1; i++){

		int current = nums[i];

		int prev = i - 1; 
		while(prev>=0 and nums[prev] > current){
			nums[prev + 1] = nums[prev];
			prev = prev - 1;
		}

		nums[prev+1] = current; 
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
