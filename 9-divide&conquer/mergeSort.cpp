#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int s, int e){
    vector <int> temp;
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    //you move from i=s to m and j=m+1 to e
    //and compare each
    while (i<=m && j<=e)
    {
        if(arr[i]<arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    //copy remaining elements
    while(i<=m)
     temp.push_back(arr[i++]);
    while(j<=e)
     temp.push_back(arr[j++]);
    
    //you have formed themerged array temp
    //copy temp to original array
    int x=0;
    for (int ctr = s; ctr <= e; ctr++)
    {
        arr[ctr]=temp[x++];
    } 
    return;
}
void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e)
        return;
    
    //divide in two array
    int mid=(s+e)/2;
    //mergeSort on each part
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    //merge both sorted arrays
    return merge(arr,s,e);

}

int main(){
vector<int> arr1={3,6,2,1,0,9};
int s=0;
int e=arr1.size()-1;
mergeSort(arr1, s, e);
for (int i = 0; i <=e; i++){
    cout<<arr1[i]<<" ";
}

}