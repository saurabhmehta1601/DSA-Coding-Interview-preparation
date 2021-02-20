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
           if(i==0 || j==0){
               dp[i][j]=0;
           }else{
               if(str1[i-1]==str2[j-1]) 
                    dp[i][j]=1+ dp[i-1][j-1];
               else 
                    dp[i][j]=0; //if you want longest subsequence set it to max(dp[i-1][j],dp[i][j-1])
           }
       }
       
    }

    string ans="";


    //using filled matrix to find path followed to reach desired result.
    while(n && m){
        if(str1[n-1]==str2[m-1]){
            ans+= str1[n-1]; // or str2[m-1] which are both same
            n--;m--;
        }else{
            if(dp[n-1][m] > dp[n][m-1]){
                n--;
            }else{
                m--;
            }
        }
    }

    reverse(ans.begin(),ans.end());

    cout<<ans;
    return 0;
}
