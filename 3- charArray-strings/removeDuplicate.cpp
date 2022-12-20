/*Given a string s, remove all the duplicate letters in sorted order*/
#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    // your code goes here
    string ans;
    sort(s.begin(),s.end());
    ans.push_back(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i]!=ans.back())
        {
            ans.push_back(s[i]);
        }
        
    }
    
    
    return ans;
}

int main()
{
    string A="geeksforgeeks";
    cout<<removeDuplicate(A);
    return 0;
}