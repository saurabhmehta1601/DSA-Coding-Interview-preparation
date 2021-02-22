#include "bits/stdc++.h"
using namespace std;



int main(int argc, char const *argv[])
{
    string  str1,str2;
    cout<<"Enter strings \n";
    cin >> str1 >> str2;
    int n=str1.size(),m=str2.size();

    int dp[n+1][m+1];
    //finding Longest common subsequence  LCS
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else{
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }

    //Longest common subsequence
    int LCS=dp[n][m];

    //shortest common supersequence
    int SCS=str1.size()+str2.size()-LCS;

    cout<<"Length of LCS "<<LCS<<endl;
    cout<<"Length of SCS "<<SCS<<endl;
    return 0;
}
