#include <bits/stdc++.h>
using namespace std;

int ans(string str){
    int n=str.length();
    stack<int> s;
    s.push(-1);
    int result=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == '(' ) s.push(i);
        else if(str[i] == ')' ) {
            s.pop();
            
            if(!s.empty()){
                result=max(i-s.top(),result);
            }else{
                s.push(i);
            }

            
        }
    }
    return result;
}




int main(){



}