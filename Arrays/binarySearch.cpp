#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    while (start<=end)
    {
        int mid= (start+end)/2;
        if (arr[mid]== key)
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            start=mid+1;      //if element is on the right of middle element, we shift the start to mid+1
        }
        else if (key<arr[mid])
        {
           end=mid-1;      //if element is on the left of middle element, we shift the end to mid-1
        }
    
    }
    return -1;      //out of the loop, element not found
     
}

int main()
{
    int n, key;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted array";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search:";
    cin>>key;

    int index=binarySearch(arr, n, key);

    if (index>0)
    {
        cout<<"The element is found at position: "<< index+1;
    }
    else
        cout<<"Element not found";
    
    cout<<endl;
    return 0;
}