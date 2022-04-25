#include<bits/stdc++.h>
using namespace std;

void sortCartesian(vector<pair<int, int>> &v)
{
    // int N = v.size();
    // // your code goes here
    // for (int i = 1; i < N; i++)
    // {
    //     int temp=v[i].first;
    //     int prev=i-1;
       
    //         while (v[prev].first>temp && prev>=0)
    //         {
    //             v[prev+1].first=v[prev].first;
    //             prev--;
    //         }
    //         v[prev+1].first=temp;
    //         }
    
    sort(v.begin(),v.end());
}
int main()
{
    vector<pair <int,int>> arr= {{3,4},{2,3},{3,7},{1,5},{3,4}};
    

    sortCartesian(arr);

    //output the sorted array
    cout<<"Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "{"<<arr[i].first << "," << arr[i].second<<"} " << endl;
    }
    cout<<endl;
    return 0;
}