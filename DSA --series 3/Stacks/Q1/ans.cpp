#include "bits/stdc++.h"

int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 



using namespace std;

void infixToPostfix(string str){
    string ans;
    int n=str.length();

    stack<char> st;
    st.push('N'); //to mark bottom of stack

    for(int i=0; i<n; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            ans+=str[i];
        }
        else if(str[i]=='(')
        {
            st.push('(');
        }
        else if(str[i]==')')
        {
            while( st.top()!='(' && st.top()!='N' )
            {
                ans+=st.top();
                st.pop();
            }
            if( st.top()=='(' )
            {
                st.pop();
            }
        }
        else
        {
          while( st.top()!='N' && prec( st.top() ) >= prec(str[i]) ){
              ans+=st.top();
              st.pop();
          }
          st.push(str[i]);
            
        }
        
    }
    while(st.top()!='N' ){
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<endl;
}


int main(int argc, char const *argv[])
{
      string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
    infixToPostfix(exp); 
    return 0;
}
