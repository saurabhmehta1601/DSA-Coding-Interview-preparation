#include "bits/stdc++.h"
using namespace std;




int main(int argc, char const *argv[])
{
    string A,B;
    cout<<"Enter initial and final strings "<<endl;
    cin>>A>>B;

    int n=A.size(),m=B.size();
    
    int dp[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(!i || !j){
                dp[i][j]=0;
            }else{
                if(A[i-1]==B[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
    }

    int LCS=dp[n][m];
    cout<<"Deletions "<<A.size()-LCS<<endl;
    cout<<"Insertions "<<B.size()-LCS<<endl;


    return 0;
}
