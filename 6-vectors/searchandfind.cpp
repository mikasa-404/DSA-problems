#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int> arr = {10,11,2,3,4,6,7,8};

    //get familiar with iterators
    cout<<"Start: "<<arr.begin()-arr.begin()<<endl;
    cout<<"End: "<<arr.end()-arr.begin();

    //search using find function
	int key;
	cin>>key;
	vector<int>::iterator it = find(arr.begin(),arr.end(),key);

	if(it!=arr.end()){
		cout <<"Present at index "<< it - arr.begin()<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}

	//using search function
	//int seq1[]={2,3,4};
	
	int seq1[]={2,7,8};
	vector<int>::iterator itr1 = search(arr.begin(),arr.end(),seq1, seq1+3);
	if(itr1!=arr.end()){
		cout <<"Seq is Present at index "<< itr1 - arr.begin()<<endl;
	}
	else{
		cout<<"sequence not found"<<endl;
	}


    
    
	return 0;
}