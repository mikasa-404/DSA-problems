/* Check if string B is permutation string A
Hint:ermuatations are just different arrangements of same alphabets. Can you make the arrangement same?
*/
#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here
    if(A.length()!=B.length())
        return false;

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if (A==B)
    {
        return true;
    }
    else 
        return false;
    

}