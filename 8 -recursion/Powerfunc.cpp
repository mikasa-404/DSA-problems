/*a^n Power using recursion*/

#include<iostream>
using namespace std;
 
/*Power function O(n)*/
int power(int a,int n){
	//base case
	if(n==0){
		return 1;
	}
	return a * power(a,n-1);
}

/*Optimised Power function O(log n)*/
int power2(int a, int n){

    if(n==0)
        return 1;

    int x= power2(a,n/2);
    int sq=x*x;
    if(n&1){
        return a*sq;
    }
    else
        return sq;


}
int main(){
 int ans=power2(2,5);
 cout<<ans;
}