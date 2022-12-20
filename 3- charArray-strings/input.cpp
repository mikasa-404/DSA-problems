/*reading a string from input buffer using cin.get()
*/
#include<iostream>
using namespace std;

int main()
{
    char sentence[100];
    char temp=cin.get();
    int i=0;
    while (temp!='#')
    {
        sentence[i]=temp;
        temp=cin.get();
        i++;
    }
    cout<<sentence;
    
    return 0;
}