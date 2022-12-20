/*Given aninteger n.Generate all binary strings of size n without consecutive 1’s using recursion*/

#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

void help(int n, int i, string str){
    if(n==i){
        ans.push_back(str);
        return;
    }

    if(str[i-1]=='0'){
        string str1=str;
        str1.push_back('0');
        help(n,i+1, str1);

        string str2=str;
        str2.push_back('1');
        help(n,i+1,str2);
    }
    if(str[i-1]=='1'){
        str.push_back('0');
        help(n,i+1, str);
    }

    return;
}
vector<string> binaryStrings(int n){
    // do not modify any default function or parameter you can use helper function if needed
    string str1="0";
    string str2="1";
    help(n, 1, str1);
    help(n,1, str2);
    return ans;
}

int main(){
    vector<string> anss = binaryStrings(3);
    for(int i=0;i<anss.size();i++)
        cout<<anss[i]<<" ";

    return 0;
}