#include<bits/stdc++.h>
using namespace std;



void sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    int n=a.size();
    for (int i = 1; i < n; i++)
    {
        int temp=a[i];
        int prev=i-1;
        if(flag==true){
            while (a[prev]>temp && prev>=0)
            {
                a[prev+1]=a[prev];
                prev--;
            }
            a[prev+1]=temp;
        }
        else{
            while (a[prev]<temp && prev>=0)
            {
                a[prev+1]=a[prev];
                prev--;
            }
            a[prev+1]=temp;
        }
        

    }
    
}
int main()
{
    vector <int> arr={1,10,1,15,7, 9, 2};
    

    sortingWithComparator(arr, 0);

    //output the sorted array
    cout<<"Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}