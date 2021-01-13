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


string prefixToPostfix(string prefix){

int n=prefix.length();
stack<string> s;
    for (int i = n-1; i >=0 ; i--)
    {
        if(isoperator(prefix[i])){
            string op1=s.top(); s.pop();
            string op2=s.top(); s.pop();
            string op=string(1,prefix[i]);

            string temp=op1+op2+op;
            s.push(temp);
        }
        else{
            s.push(string(1,prefix[i]));
        }
    }
    return s.top();
    
}


int main(int argc, char const *argv[])
{

    cout<<"enter prefix exepression\n";
    string s;
    cin>>s;
    cout<<"postfix expression is :\n";
    cout<<prefixToPostfix(s);
    return 0;
}
