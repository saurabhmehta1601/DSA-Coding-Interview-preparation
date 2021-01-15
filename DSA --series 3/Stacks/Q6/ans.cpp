#include "bits/stdc++.h"
using namespace std;

bool isOperator(char c){   return !isdigit(c) && !isalpha(c) ;}

int getPrecedence(char c){
    switch (c)
    {
    case '-' || '+': return 1; 
    case '*' :  return 2;
    case '/': return 2;
    case '^': return 3;
    default: return 0;
    }
}

string infixToPostfix(string infix){
    infix= '('+infix+')' ;
    int l=infix.size();
    stack<char> s;
    string output;

    for (int i = 0; i < l; i++)
    {
        if(!isOperator(infix[i])){
            output+=infix[i];
        }
        else if (infix[i] == '('){
                s.push(infix[i]);
        }else if (infix[i] == ')'){
            while(s.top()!='('){
                output+=s.top();
                s.pop();
            }s.pop();
    }else{
        if(getPrecedence(infix[i])>=getPrecedence(s.top())){
            s.push(infix[i]);
        }else{
            while(getPrecedence(s.top()) > getPrecedence(infix[i])){
                output+=s.top();
                s.pop();
            }s.push(infix[i]);
        }
    }
        
}return output;   }

string infixToPrefix(string infix){

reverse(infix.begin(), infix.end());
int l=infix.size();

for (int i = 0; i < l; i++)
{
    if(infix[i] =='('){
        infix[i] =')';
    }
    else if(infix[i] ==')'){
        infix[i] ='(';
    }
}

string prefix =infixToPostfix(infix); 
reverse(prefix.begin(), prefix.end());
return prefix;
}


int main()
{
    string s = ("(a-b/c)*(a/k-l)"); 
    cout << infixToPrefix(s) << std::endl; 
    return 0; 
}