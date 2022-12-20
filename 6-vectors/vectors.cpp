#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr={1,2,3,4,5};

    //pop_back
    arr.pop_back();
    //push_back
    arr.push_back(13);

    //size of vector(numbeer of elemenyts)
    cout<<arr.size()<<endl;
    //capacity of vector
    cout<<arr.capacity()<<endl;

    //print all elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    //fill Constructor
    //vector with 10 elements each with value 7
    vector <int> arr1(10,7);
    

    //2d vector
    vector<vector<int>> arr2
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //print elements
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr2[i].size(); j++)
        {
            cout << arr2[i][j] << " ";
        }    
        cout << endl;
    }
}