#include<iostream>
#include<vector>
using namespace std;

int partition(vector <int> &a, int s , int e){
    int pivot=a[e];
    int i=s-1;
    for (int j = s; j <=e; j++)
    {
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    //put pivot in its position
    swap(a[i+1],a[e]);

    return i+1;
}

void quickSort(vector <int> &a, int s , int e){
    //base case
    if(s>=e){
        return;
    }

    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
    
}

int main(){
    vector<int> hello={3,3,8,7,0,9,2};
    quickSort(hello, 0, hello.size()-1);
    for (int i = 0; i < hello.size(); i++)
    {
       cout<<hello[i]<<" ";
    }
    return 0;
}
    