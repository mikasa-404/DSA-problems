#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr={1,2,10,15};
    //insert an elemnt at the end of array
    arr.push_back(16);

    //Print all elements of vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove last element
    arr.pop_back();

    //make an array having 10 elements each having value 7
    //this is called fill constructor
    vector <int> arr2(10,7);

    //To get the size of the vector i.e. number of elements in it
    cout<<"Size: "<<arr.size()<<endl;

    //Capacity of vector(memory)
    cout<<"Capacity: "<<arr.capacity()<<endl;

    //erase
    //insert
    //2D vector
    return 0;
}