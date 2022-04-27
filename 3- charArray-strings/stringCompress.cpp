/*
*/

#include<bits/stdc++.h>
using namespace std;


int compress(vector<char>& chars) {
    // your code goes here
    string s;
    
    int len=0;

    s.push_back(chars[0]);
    for (int i = 1; i < chars.size(); i++)
    {   
        if (chars[i]==chars[i-1])
        {
            len++;
        }
        else{

            if(len>0)
                s+=to_string(len+1);

            s.push_back(chars[i]);
            len=0;
        }
        
    }
    if(len>0)
    s+=to_string(len+1);
    
    chars.clear();
    //puuting value of string in chars
    for (int i = 0; i < s.size(); i++)
    {
        chars.push_back(s[i]);
        
    }

    return  chars.size();
}




int main()
{
    vector <char> arr = {'a','b','b','b','c','c','c','c','c','c','c','c','c','c','c','c','c'};
    cout<<compress(arr);
    return 0;
}