#include "bits/stdc++.h"

using namespace std;

bool isOperator(char ch){
    switch(ch){
        case '+': return true;
        case '-': return true;
        case '/': return true;
        case '*': return true;

        default: return false;
    }

}


string postfixToinfix(string postfix){

stack<string> s;
    int n=postfix.length();

    for (int i = 0; i < n; i++)
    {
        if(isOperator(postfix[i])){
            string op1=s.top(); s.pop();
            string op2=s.top(); s.pop();

            string op=string(1,postfix[i]);

            s.push("(" + op2+op+op1 + ")");
        }else{
            s.push(string(1,postfix[i]));
        }
        }
    return s.top();

} 


int main(int argc, char const *argv[])
{
    cout<<"Enter postfix expression\n";
    string s;
    cin>>s;
    cout<<"Postfix expression is \n ";
    cout<<postfixToinfix(s);
    return 0;
}
