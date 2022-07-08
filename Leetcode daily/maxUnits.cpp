#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(vector<int> a, vector<int> b ){
    return a[1]>b[1];
}
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(), boxTypes.end(), compare);
   
    int ans=0;
    for(auto& box : boxTypes){
        int numBoxes=min(truckSize,box[0]);
        ans+=(numBoxes*box[1]);
        truckSize-=numBoxes;
        if(truckSize==0)
            break;
    }
    return ans;
    //you move to next i if first leement >trucksize;
    //trucksie=0 you stop


    
    
}

int main(){
vector<vector<int>> boxTypes = {{5,10},{2,5},{4,7},{3,9}};

int size=10;

cout<<maximumUnits(boxTypes,size);

}