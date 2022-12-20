#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
    int maxh=INT8_MIN;
    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());
    int n=horizontalCuts.size();
    int diff1=horizontalCuts[0];
    maxh=max(diff1, maxh);
    for(int i=1; i<horizontalCuts.size();i++){
        diff1=abs(horizontalCuts[i]-horizontalCuts[i-1]);
        maxh=max(diff1, maxh);
    }
    diff1=abs(h-horizontalCuts[n-1]);
    maxh=max(diff1, maxh);
    //for vertical
    int maxv=INT8_MIN;
    int m=verticalCuts.size();
    int diff2=verticalCuts[0];
    maxv=max(diff2,maxv);

    for(int i=1; i<verticalCuts.size();i++){
        diff2=abs(verticalCuts[i]-verticalCuts[i-1]);
        maxv=max(diff2, maxv);
    }
    diff2=abs(w-verticalCuts[m-1]);
    maxv=max(diff2, maxv);

    return maxv*maxh;
        
}

int main(){
    int h=5;
    int w=4;
    vector <int> ho={3};
    vector<int> v={3};
    cout<<maxArea(h,w,ho,v);
}