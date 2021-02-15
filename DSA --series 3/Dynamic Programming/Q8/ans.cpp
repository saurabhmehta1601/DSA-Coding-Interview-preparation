// With simple recurstion
// Form all possible subset by using including or not including element while traversing
// the array and the other array will be all elements left in first subarray
// Return min of the difference of the subsets  if the current element is included in the
// first subarray or not .

#include "bits/stdc++.h"

using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)  cin>>arr[i];

    int arrSum=0;
    for (int i = 0; i < n; i++)  arrSum+=arr[i];

    // Difference between subsets can in be in range 0 to arrSum

    // If given subset sum can be achieved or not
    // Finally it will be use to find difference i.e. arrSum- 2*subsetSum
    bool dp[n+1][arrSum+1];

    for(int i=0;i<=n; i++){
        for(int j=0;j<=arrSum;j++){
            if(i==0) dp[i][j]= false;
            if(j==0) dp[i][j]= true;

            if(i && j){
                if(arr[i-1]> j){  // if current element greater than subproblem subarray sum 
                    dp[i][j]=dp[i-1][j];
                }else  //  if current element less or equal to subproblem subarray sum 
                     dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
            }
        }
    }

    int diff=INT_MAX;

    for (int i = 0; i <=arrSum ; i++){
        if(dp[n][i]){ //i denotes  subset sum
            diff=min(diff,abs(arrSum-2*i));
        }
    }
    
    cout<<"Min difference is "<<diff;

    return 0;
}