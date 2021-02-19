#include "bits/stdc++.h"
using namespace std;

int LCS(string x,string y,int n,int m,int** dp){
    if(n==0 || m==0) return 0;

    if(dp[n][m]==-1){
      if(x[n-1]==y[m-1]){
          dp[n][m]=1+ LCS(x,y,n-1,m-1,dp);
      }else{
          dp[n][m]=max(LCS(x,y,n-1,m,dp),LCS(x,y,n,m-1,dp));
      }
    }
    return dp[n][m];
}


int main(int argc, char const *argv[])
{
  

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m; j++){
            dp[i][j]=-1;
        }
    }

    cout<<LCS(str1,str2,str1.length(),str2.length(),dp);
    return 0;
}
