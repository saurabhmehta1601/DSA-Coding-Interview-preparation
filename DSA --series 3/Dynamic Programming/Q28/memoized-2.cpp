#include "bits/stdc++.h"
using namespace std;

int solve(string str,int i,int j,bool isTrue,unordered_map <string,int> hm){
    if(i>j) return 0; 
    if(i==j){
        if((isTrue && str[i]=='T') || (!isTrue && str[i]=='F') ) return 1;
        
        return 0;
    }
    int ans=0;
    for(int k=i+1;k<j;k+=2){
        int LF,LT,RF,RT;
        
        // Left true
        string temp=to_string(i)+ to_string(k-1) + to_string(true);
        if(hm.find(temp)==hm.end()){
            hm[temp]=solve(str,i,k-1,true,hm);
            LT=hm[temp];
        }else{
            LT=hm[temp];
        }

        // Left false
        temp=to_string(i)+ to_string(k-1) + to_string(false);
        if(hm.find(temp)==hm.end()){
            hm[temp]=solve(str,i,k-1,false,hm);
            LF=hm[temp];
        }else{
            LF=hm[temp];
        }

        // Right false
        temp=to_string(k+1)+ to_string(j) + to_string(false);
        if(hm.find(temp)==hm.end()){
            hm[temp]=solve(str,k+1,j,false,hm);
            RF=hm[temp];
        }else{
            RF=hm[temp];
        }

        // Right True
        temp=to_string(k+1)+ to_string(j) + to_string(true);
        if(hm.find(temp)==hm.end()){
            hm[temp]=solve(str,k+1,j,true,hm);
            RT=hm[temp];
        }else{
            RT=hm[temp];
        }

        if(str[k]=='&'){
            ans+=isTrue ? LT*RT: LT*RF + LF*RT + LF*RF ;
        }

        if(str[k]=='|'){
            ans+=isTrue ? LT*RT + LT*RF + LF*RT :  LF*RF ;
        }

        if(str[k]=='^'){
            ans+=isTrue ?  LT*RF + LF*RT : LT*RT   + LF*RF ;
        }
    }
    return ans;
}


int main (){

    string str;
    cin>>str;
    unordered_map <string ,int > hm;
    cout<<solve(str,0,str.size()-1,true,hm);
}