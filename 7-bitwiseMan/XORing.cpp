//Given an array of integers. All numbers occur twice except one number which occurs once.
//Find the number without taking extra space and in linear time.
/* Suppose we have {7,3,5,4,5,3,4}

res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4
Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
    So 7 is unique
*/

#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    int res=0; //XOR with 0 is number itself
    for(int x: v){
        res^=x;
    }
    return res;
    
}