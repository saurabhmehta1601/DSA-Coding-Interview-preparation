#include "bits/stdc++.h"
using namespace std;




int main(int argc, char const *argv[])
{
    int n;
    cin >>n;
    int arr[n]; //store coin values

    for (int i =0;i<n;i++) cin>>arr[i];
    
    int sum ; cin >>sum; 

     int dp[n+1][sum+1];

    for(int i =0;i<=n;i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if(i==0) dp[i][j]=INT_MAX - 1; //infinte for sum which can't be achieved
            if(j==0) dp[i][j]=0; //no coin to get sum 0

            if(i==1 ) {
                if(j % arr[0]==0){
                    dp[i][j]=j/arr[0];
                }else{
                    dp[i][j]=INT_MAX-1;
                }
            }

           if(i>1 && j){
               if(arr[i-1] > j ){
               dp[i][j]= dp[i-1][j];
           }else{
               dp[i][j]=min(dp[i-1][j] , 1 + dp[i][j-arr[i-1]]); //at this step one argument have dp[i][j-arr[i-1]] + 1 thats why i put not possible values to be INT_MAX-1 instead of INT_MAX so that overlow doestnt happen and it wont become INT_MIN.
            }
        }
           }
        
    }
    cout<<"Min no of coins : "<< dp[n][sum];

    return 0;
}
