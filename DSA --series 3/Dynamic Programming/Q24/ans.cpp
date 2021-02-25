#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout<<"Enter the strings ";
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();

    int dp[n+1][m+1];

    for(int i=0; i <= n; i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0 ){
                dp[i][j] =0;
            }else{

                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }else{
                    dp[i][j] =max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
    }

    if(dp[n][m]== (int)s2.size() ){
        cout<<"Yes pattern str 2 in str 1 ";
    }else{
         cout<<"No pattern str 2 is not in str 1 ";
    }

    return 0;
}
