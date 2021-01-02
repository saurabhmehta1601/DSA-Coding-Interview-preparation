//O(n) 

//  STEP 1---- ITERATE THROUGH THE CHARACTERS IN STRING
//  STEP 2----IF CURRENT CHAR IS CATEGORY 1 i.e --'{' , '(' OR '[' THEN PUSH IN STACK
//  STEP 3----ELSE IF CURRENT CHAR IS CATEGORY 2 i.e --'}' , ')' OR ']' THEN CHECK
//            CHECK IF STACK IS EMPTY RETURN FLASE OTHERWISE POP UNTIL
//            STACK TOP IS '{' , '(' OR '[' RESPECTIVELY
//  STEP 4----IF STACK IS EMPTY RETURN FALSE ELSE POP THE TOP ELEMENT WHICH IS OPENING
//              BRACKET
//  STEP 5----AT LAST PUT RETURN TRUE STATEMENT SINCE FALSE IS NOT RETURNED 


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isValid(string str){
		if(str.length() & 1==1) return false;
		
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



