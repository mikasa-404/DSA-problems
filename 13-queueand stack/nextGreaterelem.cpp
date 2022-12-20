//start from end of vector
//while stack is non-empty and top is less than equal to current
//pop from stack
//if stack is empty answer is -1
//else ans is top
//at the end push curret elt to stack
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v){
  stack<int> s; 
  int n=v.size();
  vector<int> ans(n,0);
  for (int i = n-1; i >=0; i--)
  {
    while(!s.empty() && s.top()<=v[i])
    s.pop();

    if(s.empty())
    ans[i]=-1;
    else
    ans[i]=s.top();


    s.push(v[i]);
  }
   return ans;
}