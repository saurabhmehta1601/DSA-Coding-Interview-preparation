#include "bits/stdc++.h"
using namespace std;



int main(int argc, char const *argv[])
{
   string str1,str2;
    cout<<"Enter string 1  :  "; cin>>str1;
    cout<<"Enter string 2  :  "; cin>>str2;

    int n=str1.size(),m=str2.size();
    int dp[n+1][m+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i==0 || j==0 ){
                dp[i][j]=0;
            }else{
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
    }
    

    cout<<dp[n][m];
    return 0;

}
