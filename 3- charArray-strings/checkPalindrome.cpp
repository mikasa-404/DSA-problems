/*Check if a string is palindrome*/
#include<bits/stdc++.h>
using namespace std;


bool isPalindrome1(string str)
{
    // your code goes here
    int n=str.length();
    for (int i = 0; i < n/2; i++)
    {
        str[i]==str[n-1-i];
        return false;
    }
    
    return true;
}
bool isPalindrome(string str)
{
    // your code goes here
    string revstr;
    int n=str.length();
    for(int i=n-1; i>=0 ; i--){
        revstr.push_back(str[i]);
    }
    if(str==revstr)
        return true;
    else
        return false;
}
int main(){
    string s1="abcda";
    string s2="abcba";
    

}