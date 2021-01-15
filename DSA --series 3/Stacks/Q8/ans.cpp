
#include "bits/stdc++.h"

using namespace std;

bool isBalanced(string str){
    int n=str.length();
    if(n&1==1) return false;
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
       if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
           s.push(str[i]);
       }else if(str[i]==')'){
           if(s.empty()) return false;
           while(s.top()!='('){
               if(s.empty()){return false;}
               s.pop();
           }s.pop();
       }else if(str[i]=='}'){
           if(s.empty()) return false;
           while(s.top()!='{'){
               if(s.empty()){return false;}
               s.pop();
           }s.pop();
       }else if(str[i]==']'){
           if(s.empty()) return false;
           while(s.top()!='['){
               if(s.empty()){return false;}
               s.pop();
           }s.pop();
       }
    }
   return true; 
}


int main()
{

    string str="[(])";
   if(!isBalanced(str)){
       cout<<"Not balanaced ";
   }
   else{
       cout<<" balanced ";
   }


    return 0;
}
