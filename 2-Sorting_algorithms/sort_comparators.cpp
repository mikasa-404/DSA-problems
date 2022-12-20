 
#include<bits/stdc++.h>
using namespace std;

bool compare(int a ,int b){
    return a>b;
}

int main()
{
    int arr[]={1,10,1,15,7, 9, 2};
    //function comapre is passed as a parameter to sort function
    //this compare fucntion is called multiple time
    sort (arr, arr+7, compare);

    
    cout<<"Sorted array is: ";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  
    return 0;
}