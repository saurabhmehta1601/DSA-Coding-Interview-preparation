#include "bits/stdc++.h"
using namespace std;

void NFG(int Q[],int n){

    unordered_map<int,int> hm;
    stack<int> s;
    s.push(0);

    for (int i = 0; i < n; i++)
    {
       hm[Q[i]]++;
    }
    int S[n]={0};

    for (int i = 1; i < n; i++)
    {
        if( hm[Q[s.top()]] > hm[Q[i]]){
            s.push(i);
        }else{
            while(!s.empty() &&  hm[Q[s.top()]] < hm[Q[i]]){
                S[s.top()]=Q[i];
                s.pop();
            } s.push(i);
        }
    }

    while(!s.empty()){
        S[s.top()]=-1;
        s.pop();
    }
    
    for(int i=0;i<n;i++){
        cout<<S[i]<<" ";
    }

}




int main(int argc, const char** argv) {


int a[] = { 1, 1, 2, 3, 4, 2, 1 };
    int len = 7;
   

 
 
    // Function call
    NFG(a, len);
    return 0;

}



