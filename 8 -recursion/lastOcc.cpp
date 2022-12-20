
/*find last occurence of a number using recursion*/
#include<iostream>
using namespace std;

//method 1
int lastOcc(int arr[], int n, int key){
    if(n==0)
        return -1;
    //recursive case
    if(arr[n-1]==key )
        return n-1;
    lastOcc(arr,n-1,key);
    
}

//method 2
int lastOcc2(int arr[], int n, int key){
    if(n==0)
        return -1; 
    int x = lastOcc2(arr+1,n-1,key);
    
    if(x!=-1){
        return x+1;
    }
    else if(arr[0]==key )
        return 0;
    else 
        return -1;

}

int main(){
int arr[]={1,2,2,3,4,5};
int n=sizeof(arr)/sizeof(int); 
int x= lastOcc2(arr, n, 2);
    if(x!=-1)
    cout<<"Found at position "<<x<<endl;
    else
    cout<<"Not found";
    
}