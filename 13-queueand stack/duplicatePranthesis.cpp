#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    stack< char> s;
    
    for(int i=0; i<str.length(); i++)
    {
       // cout<<i<<" "<<str[i]<<endl;
        //id it is open bracket push into stack
        if(str[i]=='('){
        s.push(str[i]);
        }
        
        //if it is close bracket check top of stack is opposite or not
        else{
             if(s.empty())
                return false;
            
             if(str[i]==')' && s.top()!='(')
             return false;
            else if((str[i]==')' && s.top()=='('))
            s.pop();
            
            
        

        //if yes pop and continue 
        //if no return false
        //at the end if stack is non-empty false
        //if empty return true 
    }

        // cout<<"stack: ";
        // stack<char> foo{s};
        // while(foo.size()){
        // cout<<foo.top()<<" ";
        // foo.pop();

        // }
        // cout<<endl;
}
    return s.empty();

}
int main(){
    //string s="((673)ue))";
    string s="((67(3)ue))";
    cout<<duplicateParentheses(s);

}