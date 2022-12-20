#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
 void help(int N){
    if(N==0)
        return;
    
    help(N-1);
    ans.push_back(N);

    return;

 }

vector<int> increasingNumbers(int N) {
    help(N);
    return ans;
}