#include "bits/stdc++.h"
using namespace std;




int main(int argc, char const *argv[])
{
    string s1,s2;
    cout<<"Enter substrings \n";
    cin>>s1>>s2;

    int n=s1.size(),m=s2.size();

    int dp[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else{
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }else
                  dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    int i=n,j=m;
    string ans="";

    while(i && j){
        if(s1[i-1]==s2[j-1]){
            ans+=string(1,s1[i-1]); 
            i--;j--;
        }else{
           

            if(dp[i][j-1] > dp[i-1][j]){
                ans+= string(1,s2[j-1]); j--;
            }else{
                  ans+=string(1,s1[i-1]) ; i--;
            }

        }
    }

    while(i > 0){
        ans+=string(1,s1[i-1]);
        i--; 
    }

    while(j > 0){
        ans+=string(1,s2[j-1]);
        j--; 
    }


    reverse(ans.begin(),ans.end());

    cout<<ans;
    return 0;
}
