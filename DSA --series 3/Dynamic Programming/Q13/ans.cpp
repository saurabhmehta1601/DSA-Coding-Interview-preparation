#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int v[n];

    for (int i = 0; i < n; i++) cin>>v[i];

    int sum; cin>>sum;

    int dp[n+1][sum+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if(i==0)  dp[i][j]=0;
            if (j==0) dp[i][j]=1;
          
            if(i && j){
                if(v[i-1] > j){ //if on including coin excludes sum 
                    dp[i][j]= dp[i-1][j]; //same as without element
                }else{
                    dp[i][j]= (dp[i-1][j] + dp[i][j-v[i-1]]); // on adding element + without adding element
                }
            }
        }
        
    }
    
    cout<<dp[n][sum];

    return 0;
}
