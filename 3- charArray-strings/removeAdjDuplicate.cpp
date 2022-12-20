#include<bits/stdc++.h>
using namespace std;
string removeAdjDuplicate(string s){
    string ans;

    //Push a char to the ans stack if it is empty
    //If not empy , then check if the top element is same as current character in iteration. If same then pop from stack.
    //Otherwise push char to ansstack.
    for (int i = 0; i < s.length(); i++)
    {
        if(ans.empty()){
            ans.push_back(s[i]);
        }
        else if( s[i]==ans.back()){
            ans.pop_back();
        }
        else
            ans.push_back(s[i]);

    }

   return ans; 
    
}

int main()
{
    string A="abbaca";
    cout<<removeAdjDuplicate(A);
    return 0;
}