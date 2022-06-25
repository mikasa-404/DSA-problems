/*calculate factorial of given numbver recursively*/

#include<iostream>
using namespace std;

int factorial(int num){
    int ans;
    if(num==0){
        ans=1;
    }
    else
        ans=num*factorial(num-1);

    return ans;    
}
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    int ans=factorial(x);
    cout<<ans;
}