
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool checkDic(string s,vector<string> &dictionary){
    for (int i = 0; i < dictionary.size(); i++)
    {
        if(s==dictionary[i])
            return true;
    }
    return false;
}
void solve(string str, vector<string> &dictionary, int s, int& cnt){
    //base case if you reach end of string
    if(s==str.size()){
        cnt+=1;
        return;
    }
    //rec case
    //you start and run a for loop to get partitions each time
    int len=0;
    for (int i = s; i <=str.size(); i++)
    {  
        // use substr function and check if it is in dictionary
        string ss=str.substr(s,len++);
        if(checkDic(ss, dictionary)){
            solve(str, dictionary, i,cnt);
        }
    }

}

int wordBreak(string str, vector<string> &dictionary){
	int s=0;
    int cnt=0;
    solve(str, dictionary, s, cnt);
    return cnt;
}
int main(){
   string str="ilikesamsungmobile";
   vector<string> dictionary = {"i", "like", "sam","sung","samsung", "mobile"};
   cout<<wordBreak(str,dictionary);

   return 0;
}