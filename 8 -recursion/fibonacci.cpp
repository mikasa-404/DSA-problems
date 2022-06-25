/*fibonacci series: 0 1 1 2 3 5 8 ... */

#include<iostream>
using namespace std;

int fibonacci(int n){
    int ans;
    if(n==0|| n==1){
        ans=n;
    }
    
    else{
        ans=fibonacci(n-1)+fibonacci(n-2);
    }

    return ans;    
}
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    int ans=fibonacci(x);
    cout<<ans;
}