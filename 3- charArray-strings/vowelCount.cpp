/*return a string containing all vowels present in S in serial order*/
#include<bits/stdc++.h>
using namespace std;

bool isvowel(char a){
    if (a=='a' || a=='e'|| a=='i'|| a=='o'|| a=='u')
    {
        return true;
    }
    else 
        return false;
    
}

string vowel(string S){
    // your code goes here
    string ans;
    for (int i = 0; i <S.length(); i++)
    {
        if(isvowel(S[i]))
            ans.push_back(S[i]);
    }
    
    return ans;
    
}

int main(){
    string s="aeoibsddaeioudb";
    cout<<vowel(s);
    return 0;

}
