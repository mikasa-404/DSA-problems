#include<iostream>
using namespace std;
	

int linear_search(int arr[],int n,int key){

	for(int i=0; i<n; i++){
		//Check if current element matches with the key
		if(arr[i] == key){
			return i;
		}
	}
	//out of the loop 
	return -1;
}


int main(){

	int n, key;

    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the desird array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to search:";
    cin>>key;
    
    int index = linear_search(arr,n,key);


    if (index>0)
    {
        cout<<"The element is found at position: "<< index+1;
    }
    else
        cout<<"Element not found";


    cout<<endl;
	return 0;
}