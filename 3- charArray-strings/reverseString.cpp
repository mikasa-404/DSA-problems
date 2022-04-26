/*Different Methods to reverse a string*/
#include<bits/stdc++.h>
using namespace std;

void rev1(string s1){
    string s2;
    int n=s1.length();

    for(int i=n-1; i>=0 ; i--){
        s2.push_back(s1[i]);
    }
    cout<<"reverse: "<<s2<<endl;
}

void rev2(string s1){
    int n=s1.length();
    for (int i = 0; i < n/2; i++)
    {
        swap(s1[i], s1[n-1-i]);
    }
    cout<<"reverse: "<<s1<<endl;

}

void rev3(string s1){
    reverse(s1.begin(), s1.end());
    cout<<"reverse: "<<s1<<endl;

}

int main()
{
    string s1="abcde";
    rev1(s1);
    rev2(s1);
    rev3(s1);
    return 0;
}