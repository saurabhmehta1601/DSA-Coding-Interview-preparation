// 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isValid(string str){

        stack<char> st;
        for(char c:str){
            if(c=='(' || c=='{' || c=='[' ){
                st.push(c);
            }else{
                if(c=='}'){ if(st.empty()) return false;
                    while(st.top()!='{'){
                        st.pop();
                        if(st.empty()){
                            return false;
                        }
                    }st.pop();
                }else  if(c==')'){ if(st.empty()) return false;
                    while(st.top()!='('){
                        st.pop();
                        if(st.empty()){
                            return false;
                        }
                    }st.pop();
                }else  if(c==']'){ if(st.empty()) return false;
                    while(st.top()!='['){
                        
                        if(st.empty()){
                            return false;
                        }
                    }st.pop();
                }
            }
        }



            return true;
        }
};



int main(){
    cout<<"Enter sequence\n";
    string str;
   cin>>str;

    cout<<'\n';

    Solution s;
    
    if(s.isValid(str)){
        cout<<"Correct sequence";
    }else{
        cout<<"Wrong sequence";
    }
    

}



