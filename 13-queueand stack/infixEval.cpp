#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
    if(ch == '+' or ch == '-')return 1;
    if(ch == '*' or ch == '/')return 2;

    return 0;
}
int eval(int first , int second , char ch){
    switch(ch){
        case '+': return first + second;
        case '-': return first - second;
        case '*': return first * second;
        case '/': return first / second;
    }
}
int evaluate(string input1){
    stack <int> operands;
    stack<char> operators;
    for (int i = 0; i < input1.length(); i++)
    {

        if(input1[i]==' ')
        continue;
        else if(input1[i] == '('){
            operators.push(input1[i]);
        }
        else if(isdigit(input1[i])){
            int val=0;
            while(i < input1.size() and (isdigit(input1[i]))){
                val = (val * 10) + (input1[i]- '0');
                i++;
            } 
            operands.push(val);
            i--;
        }
        else if(input1[1]==')'){
            while(!operators.empty() && operators.top() != '(')
            {
                int val2 = operands.top();
                operands.pop();
                 
                int val1 = operands.top();
                operands.pop();
                 
                char op = operators.top();
                operators.pop();
                 
                operands.push(eval(val1, val2, op));
            }
             
            if(!operators.empty())
               operators.pop();
        }
        
        else{
            while(!operators.empty() and (prec(input1[i]) <= prec(operators.top()))){
                    int second = operands.top();
                    operands.pop();
                    int first = operands.top();
                    operands.pop();
                    char ch = operators.top();
                    operators.pop();
                    int ans = eval(first , second , ch);
                    operands.push(ans);
                }
                operators.push(input1[i]);
            }
        }
    
while(!operators.empty()){
        int second = operands.top();
        operands.pop();
        int first = operands.top();
        operands.pop();
        char ch = operators.top();
        operators.pop();
        int ans = eval(first , second , ch);
        operands.push(ans);
    }
    
    return operands.top();
}
int main(){
    //string s="100 * 2 + 12";
    string s="100*2/12";
    cout<<evaluate(s);

}
        
