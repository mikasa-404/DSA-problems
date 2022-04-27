/*Convert binary string into its decimal form and return as an integer*/
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int ans=0;
    int power=0;
    for (int i = s.length()-1; i >=0; i--)
    {
       if (s[i]=='1')
       {
           ans+=pow(2,power);
       }

        power++;
    }
    

    return ans;
    // your code goes here
}
int main(){
    string s="111";
    cout<<binaryToDecimal(s);
    return 0;
}