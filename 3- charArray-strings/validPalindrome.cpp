/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {  
    string s2;  
    for (int i = 0; i < s.length(); i++)
    {
        if(iswalnum(s[i])){

            if (isupper(s[i]))
            {
                s2.push_back(tolower(s[i]));
            }
            else
            s2.push_back(s[i]);
        }
    }
    cout<<s2;
    for (int i = 0; i < s2.size()/2; i++)
    {
        if(s2[i]!=s2[s2.size()-1-i])
            return false;
    }
    
    return true;
    

    
    }
int main(){
    string s1="A man, a plan, a canal: Panama";
    
    cout<<isPalindrome(s1);

}
