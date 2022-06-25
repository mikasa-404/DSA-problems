/*find firSt occurence of a number using recursion*/
#include<iostream>
using namespace std;

// 1 2 3 4 5 //4
int firstOcc(int arr[], int n, int key){

    if(n==0)
        return -1;
    //recursive case
    if(arr[0]==key )
        return 0;
    
    int x = firstOcc(arr+1, n-1, key);
    if(x!=-1)
        return x + 1;
    
    return -1;
    
}
int main(){
int arr[]={1,2,2,3,4,5};
int n=sizeof(arr)/sizeof(int); 
int x= firstOcc(arr, n, 2);
    if(x!=-1)
    cout<<"Found at position "<<x<<endl;
    else
    cout<<"Not found";
    
}