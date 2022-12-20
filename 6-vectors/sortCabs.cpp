//giver set of pairs (x,y). sort them according to their distance from origin in ascending order

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;


bool comparee(pair<int,int> c1, pair<int,int> c2){
    float d1=sqrt(pow(c1.first,2)+pow(c1.second,2));
    float d2=sqrt(pow(c2.first,2)+pow(c2.second,2));
    return d1<d2;
}


vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(), v.end(), comparee);
    return v;  
}

int main(){
    vector<pair<int,int>> v={ {1,2},{3,4},{4,4}};
    vector<pair<int,int>> ans= sortCabs(v);
    for(auto s: v){
        cout<<s.first<<" "<<s.second<<endl;
    }
    return 0;
}


