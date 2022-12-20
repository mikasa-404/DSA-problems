#include <bits/stdc++.h>
using namespace std;

vector<char> firstnonrepeating(vector<char> str){
        queue <char> q;
	int cnt[CHAR_MAX] = { 0 };
    vector<char> ans;
    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i]-'a']++;
            q.push(str[i]);

        while(!q.empty())
        {
            if(cnt[q.front()-'a']>1 )
            q.pop();
            else{
            ans.push_back(q.front());
            break;
            }
        }
        if(q.empty())
            ans.push_back('0');
    
        
    }
    return ans;
    

}