/*return a vector containing all occurrences of a given numbe rin an array
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void help(int k, vector<int> v, int i){
     if(i==v.size())
        return;
    
    if(v[i]==k){ 
        ans.push_back(i);    
    }
    help(k,v,i+1);
    return;
}

vector<int> findAllOccurences(int k, vector<int> v){

    help(k,v,0);
    return ans;
}
int main(){
    vector <int> arr={1,2,3,4,3,5,3};
    vector <int> answer= findAllOccurences(3,arr);
    for (int i = 0; i < ans.size(); i++)
    {
       cout<<ans[i]<<" ";
    }

}