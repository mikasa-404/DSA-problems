#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a , string b){
    if(a.length()==b.length())
        return a<b;
    
    return a.length()<b.length();
}

void findSub( char *arr, char *output, int i, int j, vector <string> &list){
    //base case if 
    if(arr[i]=='\0'){
    output[j]='\0';
       string temp(output);
       list.push_back(temp);
        return;
    }
    
    //input letter and j moves ahead
    output[j]=arr[i];
    findSub(arr, output, i+1, j+1, list);
    //no input, j remains there 
    //you dont have to pop back output[j], because we are overwriting it in next function call
    findSub(arr, output, i+1, j, list);
}

int main(){
    char arr[100];
    char output[100];
    vector <string> list;
    cin>>arr;
    findSub(arr,output, 0, 0, list);
    sort(list.begin(), list.end(), compare);
    for(auto s: list){
        cout<<s<<",";
    }
}