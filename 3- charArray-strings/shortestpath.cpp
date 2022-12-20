/*Shortest path problem
Given a long route containing N,S,E,W directions.find the shortest path to reach the location
*/
#include<iostream>
using namespace std;

int main()
{
    char ch = cin.get();
    int x=0;
    int y=0;
    while(ch!='\n'){
        //action based on every input
        switch (ch)
        {
        case 'N': y++;
            break;
        case 'S': y--;
            break;
        case 'W': x--;
            break;
        case 'E': x++;
            break;
        }
        ch = cin.get();
    }
    //Final displacement
    cout<< x <<" "<< y<<endl;

    // Cases to get shortest path
    //case 1 , North east
    if(x>=0 and y>=0){
        for (int i = 0; i < x; i++){
            cout<<'E';
        }
        for (int i = 0; i < y; i++){
            cout<<'N';
        }
    }
    //case 2 , North west
    else if(x<=0 and y>=0){
        for (int i = 0; i < -x; i++){
            cout<<'W';
        }
        for (int i = 0; i < y; i++){
            cout<<'N';
        }
    }
    //case 3 , South west
    else if(x<=0 and y<=0){
        for (int i = 0; i < -x; i++){
            cout<<'W';
        }
        for (int i = 0; i < -y; i++){
            cout<<'S';
        }
    }
    //case 4 , South east
    else if(x>=0 and y<=0){
        for (int i = 0; i < x; i++){
            cout<<'E';
        }
        for (int i = 0; i < -y; i++){
            cout<<'S';
        }
    }
    return 0;
}