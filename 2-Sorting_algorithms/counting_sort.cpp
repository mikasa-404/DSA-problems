#include<iostream>
#include<vector>
using namespace std;
void countingSort(vector<int> &arr){
    int largest=arr[0];

    //loop to get the largest element
    for (int i = 0; i < arr.size(); i++)
    {
        largest=max(largest, arr[i]);
    }

    //make a freq array 
    vector<int> freq(largest,0);
    //loop to increase frequency
    for (int i = 0; i <arr.size(); i++){
        freq[arr[i]]++;
    }

    //putback elements
    int j=0;
    for (int i = 0; i <= largest; i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }      
    }
    
    
    
}
int main()
{
    vector <int> arr={1,10,1,15,7, 9, 2};
    

    countingSort(arr);

    //output the sorted array
    cout<<"Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}