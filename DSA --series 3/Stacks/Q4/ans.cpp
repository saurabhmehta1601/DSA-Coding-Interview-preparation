#include "bits/stdc++.h"
using namespace std;

bool isoperator(char ch)
{
    switch (ch)
    {
    case '+': return true;
    case '-': return true;
    case '/': return true;
    case '*': return true;
    
    default:
       break;
    }
return false;

}

string postfixToprefix(string postfix){

int n=postfix.length();
stack<string> s;
    for (int i = 0; i <n ;i++){
    
        if(isoperator(postfix[i])){
            string op1=s.top(); s.pop();
            string op2=s.top(); s.pop();
            string op=string(1,postfix[i]);

            string temp=op+op2+op1;
            s.push(temp);
        }
        else{
            s.push(string(1,postfix[i]));
        }    
} return s.top();
}

int main(int argc, char const *argv[])
{

    cout<<"enter postfix exepression\n";
    string s;
    cin>>s;
    cout<<"prefix expression is :\n";
    cout<<postfixToprefix(s);
    return 0;
}
