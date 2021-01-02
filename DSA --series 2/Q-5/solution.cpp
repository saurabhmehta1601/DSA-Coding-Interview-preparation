#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getScore(vector<string>& ops ){
            if(ops.size()==0) return 0;

            stack<int> st;
            for(string str:ops){
                if(str=="C"){
                    st.pop();
                }else if(str=="D"){
                    st.push(2*st.top());
                }else if(str=="+"){
                    int x=st.top();
                    st.pop(); //removing top element to set second last element
                    int y=st.top(); //store second last element in y
                    st.push(x); //again pushing the top element              
                    st.push(x+y);
                }else{
                    st.push(stoi(str));
                }
            }
            int sum=0;
            while(!st.empty()){
                sum+=st.top();
                st.pop();
            }
         return sum;
        }
};




int main(){

vector<string> v={"5","2","C","D","+"};
    Solution s;
    cout<<s.getScore(v);
}


