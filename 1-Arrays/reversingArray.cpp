#include<iostream>
using namespace std;

void array_rev(int arr[], int n){
    int start=0, end=n-1;
    while (start<end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
    
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

    array_rev(arr, n);
    //output the reversed array
    cout<<"Reverse of this array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}