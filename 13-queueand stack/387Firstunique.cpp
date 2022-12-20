#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
    queue <char> q;
	int cnt[CHAR_MAX] = { 0 };
    int ans;
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]-'a']++;
        q.push(i);

        while(!q.empty() && cnt[s[q.front()]-'a']>1)
        {
            q.pop();
        }    
    }
    return q.front() ;
    }
};
int main(){
string s="leetcode";
Solution obj;
cout<<obj.firstUniqChar(s);
}