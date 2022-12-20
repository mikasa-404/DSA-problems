#include <bits/stdc++.h>
#include<stack>
using namespace std;

int reverse(int n){
    int ans=0;
    int pow=1;
    stack <int> s;
	while(n>0){
	    int rem=n%10;
        s.push(rem);
        n=n/10;
	}
    // cout<<s.top();
    while(!s.empty()){
        int x=s.top();
        s.pop();
        ans+=x*pow;
        pow=pow*10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}