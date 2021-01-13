#include "bits/stdc++.h"
using namespace std;

bool isOperator(char ch){
    switch (ch)
    {
    case '+': return true;
    case '-': return true;
    case '/': return true;
    case '*': return true;
    case '^': return true;
    
    default:
        break;
    }
    return false;
}


string prefixToinfix(string str){
int n=str.length();
stack<string> s;
string ans;

for (int i = n; i >= 0; i--){
    if(isOperator(str[i])){
        string op1=s.top(); s.pop();
        string op2=s.top(); s.pop();
        string oper= string(1,str[i]);
        string temp=op1+oper+op2;
        s.push(temp);
    }else{
        s.push(string(1,str[i]));
    }
}

while (!s.empty())
{
    ans+=s.top(); s.pop();
}


return ans;
}


int main(int argc, char const *argv[])
{
string s;
cout<<"Enter prefix operation \n ";
cin>>s;
cout<<"Infix conversion is \n";
cout<<prefixToinfix(s);


}
