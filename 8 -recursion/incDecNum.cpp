/*print numbers from 0 to n in increasing and decreasing order recursively*/
#include<iostream>
using namespace std;

void dec(int n){
	//base case
	if(n==0){
		return;
	}
	//if you are going towards the base case 
    //add statement before recursive function call
	cout<<n <<" ";
	dec(n-1);
}

void inc(int n){
	//base case
	if(n==0){
		return;
	}
	inc(n-1);
    //if you are going away from base case to top
    //add statement after recursive function call
	cout<<n <<" ";
}

int main(){

	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);

	
	return 0;
}