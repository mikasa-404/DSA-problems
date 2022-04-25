#include<bits/stdc++.h>
using namespace std;

//better approach
int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());
    int res = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= D) { res++; i++;}
    }

    return res;
}

//My approach
int pairSticks(vector<int> length, int D)
{
    int cnt=0;
    // your code goes here
    for (int i = 0; i < length.size(); i++)
    {
        if(length[i]==NULL)
            continue;

        for (int j=i+1; j <length.size(); j++)
        {
            if(length[j]==NULL)
                continue;
            int diff= length[j]-length[i];
            if(abs(diff)<=2){
                cout<< length[i]<<" , "<<length[j]<<endl;
                cnt++;
                length[i]=NULL;
                length[j]=NULL;
            }
        }
        
    }
    return cnt;
    
}
int main()
{
    vector <int> arr={1,3,3,9,4};

    cout<<"output:";

    cout<<pairSticks(arr,2);
    cout<<endl;
    return 0;
}