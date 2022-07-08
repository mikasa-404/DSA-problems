/*Use binary search using recursion to find position of an element x in array of integers*/
#include<iostream>
#include<vector>
using namespace std;
  
int help(vector<int> v, int s, int e, int x){
    if(s<=e){

    int mid=(s+e)/2;
    if(v[mid]==x)
        return mid;
    else if(x>v[mid])
        return help(v,mid+1,e,x);
    else
        return help(v,s,mid-1,x);
    }

    return -1;
}
int binarySearch(vector<int> v, int x)
{
   int res= help(v,0,v.size()-1,x);
   return res;

}
int main(){
    vector<int> hello={0,2,3,3,7,8,9};
    int x = 7;
    cout<<binarySearch(hello, x);
}