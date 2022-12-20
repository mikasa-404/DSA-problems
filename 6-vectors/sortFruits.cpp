//
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

//compare function for name
bool cmp1(pair<string,int> p1,pair<string,int> p2 ){
    return p1.first<p2.first;
}

//compare function for price
bool cmp2(pair<string,int> p1,pair<string,int> p2){
    return p1.second<p2.second;
    
}

//to sort
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S=="price"){
        sort(v.begin(), v.end(),cmp2);
    }
    else
        sort(v.begin(), v.end(),cmp1);
    
    return v;
}
int main(){
    
}