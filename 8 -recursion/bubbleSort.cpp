/*Bubble sort using recursion*/

#include<iostream>
using namespace std;

void bubbleSort2(int a[], int n){
    if(n==1)
        return ;
    
    for(int j=0; j<n;j++){        //we can convert this loop into recursive call as well
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
    }
    bubbleSort2(a, n-1);

}

void bubbleSort(int a[], int n, int j){
    if(n==1)
        return ;
    if(j==n-1){
        bubbleSort(a, n-1,0);
        return;
    }

    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);

    bubbleSort(a, n,j+1);

}

int main(){
    int arr[]={5,4,3,2,1};
    bubbleSort(arr, 5,0);
    for(int j=0; j<5;j++){
        cout<<arr[j]<<" ";
    }
}