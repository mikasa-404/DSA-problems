#include<iostream>
using namespace std;

int binSearch(int arr[], int n, int s , int e, int key){

    //base case
    if(s>e){
        return -1;
    }
    int mid= (s+e)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        binSearch(arr, n, s, mid-1, key);
    }
    else{
        binSearch(arr, n, mid+1, e, key);
    }
    

}
 
int main(){
int arr[]={1,3,5,7,9,22};

cout<<binSearch(arr, 6, 0, 5, 9);

}