#include "bits/stdc++.h"
using namespace std;



int main(int argc, char const *argv[])
{
    cout<<"Enter no of elements \n";
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array \n"; 
    for(int i=0; i<n; i++) cin>>arr[i];

    int arrSum=0;
     for(int i=0; i<n; i++) arrSum+=arr[i];

    cout<<"Enter the target sum \n"; //actually it is what diff was in previous question
    int diff;
    cin>>diff;
    
    diff=abs(diff);  // just revert all element signs then sum x will be sum -x with same combinations


    bool dp[n+1][arrSum+1];

    for (int i = 0; i <= n; i++)
    {
       for (int j = 0; j <= arrSum; j++)
       {
          if(i==0) dp[i][j]= false;
          if(j==0) dp[i][j]= true;

          if(i && j) {
              if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
              else{
                  dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
              }
          }
       }
       
    }
    
    int ans=0;
    for(int i=0; i<= n; i++){
        if(dp[i][(diff+arrSum)/2]){
                ans++;
        }
    }

    cout<<"Total "<<ans<<" combinations";
    return 0;
}
