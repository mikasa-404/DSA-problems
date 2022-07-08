#include<iostream>
using namespace std;

void permutations(string s, int i, int len){
    //base case
    if(s[i]=='\0'){
        cout<<s<<",";
        return ;

    }
    //rec case
    for (int j = i; j < len; j++)
    {
        swap(s[i], s[j]);
        permutations(s, i+1, len);
        swap(s[i], s[j]); //backtracking step

    }

}

int main(){
 string st="ABC";
 int n=st.size();
 permutations(st,0,n);
}