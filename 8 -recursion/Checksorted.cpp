/*check if the array is sorted recursively*/
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==1 || n==0)
        return true;
    if((arr[0]<arr[1])&& isSorted(arr+1, n-1))
        return true;

    return false;
}
int main(){
    // int arr[]={1,2, 5,3};
    int arr[]={1,2,3,4,5};
    int n=(sizeof(arr)/sizeof(int));
    if(isSorted(arr,n))
        cout<<"Sorted"<<endl;
    else
        cout<<"Not sorted"<<endl;

    
}