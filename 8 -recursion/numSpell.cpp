/*Given a number convert it into a string recursively example: 221 to" two two one"*/
#include<iostream>
using namespace std;

string spelling[]={"zero", "one", "two","three","four","five","six", "seven","eight", "nine"};
void numSpell(int n){

if(n==0)
    return;

int dig= n%10;
numSpell(n/10);
cout<<spelling[dig]<<" ";
}

int main(){
 numSpell(52543);
 return 0;
}