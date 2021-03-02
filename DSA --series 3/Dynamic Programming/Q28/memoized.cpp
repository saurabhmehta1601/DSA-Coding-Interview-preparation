// Using global  3D matrix although this causes memory wastage but less code to implement 

#include "bits/stdc++.h"
using namespace std;

int dp[1001][1001][2]; 
int solve(string str,int i,int j,bool isTrue){
    if(i>j) return 0; //if empty string

    if(i==j){
           
        if( (isTrue && str[i]=='T') || (!isTrue && str[i]=='F')) {
            return 1;
        }
        return 0;
    }

int ans=0;
    
    for(int k=i+1;k<j;k+=2){
       
        int LF,RF,LT,RT;

        if(dp[i][k-1][0]==-1){
           dp[i][k-1][0]=solve(str,i,k-1,false);
        }
        LF=dp[i][k-1][0];

        if(dp[i][k-1][1]==-1){
        dp[i][k-1][1]=solve(str,i,k-1,true);
        }
        LT=dp[i][k-1][1];

        if(dp[k+1][j][1]==-1){
        dp[k+1][j][1]=solve(str,k+1,j,true);
        }
        RT=dp[k+1][j][1];

        if(dp[k+1][j][0]==-1){
        dp[k+1][j][0]=solve(str,k+1,j,false);
        }
        RF=dp[k+1][j][0];

        if(str[k]=='&'){
            ans+= isTrue ? LT*RT : LT*RF + LF*RT + LF*RF ;
        }else if(str[k]=='|'){
            ans+= isTrue ? LT*RT + LT*RF + LF*RT : LF*RF ;
        }else{
            ans+= isTrue ? LT*RF + LF*RT : LF*RF + LT*RT;
        }
    }
        return ans;
}

int main(){
memset(dp, -1 , sizeof(dp));


    string str;
    cin>>str;

cout<<solve(str,0,str.size()-1,true);
return 0;
}