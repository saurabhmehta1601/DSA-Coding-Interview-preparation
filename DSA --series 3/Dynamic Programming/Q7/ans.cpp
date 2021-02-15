#include "bits/stdc++.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"No of elements \n";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter elements \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter target value \n";
    int target ;
    cin>>target;

    int dp[n+1][target+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1; //null set will have target==0 always

            if(i && j){
                if(arr[i-1]<=j){
//                                  if not included  |      if included
                        dp[i][j]=   dp[i-1][j]    +  dp[i-1][j-arr[i-1]]; 
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
    }
    

cout<<"No of subsets "<<dp[n][target];
    
    return 0;
}
