// suppose difference = S1-S2 = diff which is given
//  also S1+S2 =arrSum
// S1 = (arrSum+diff)/2  for every S1 there will be corresponding S2
// Ans is no of subsets having S1 as sum .


// With simple recursion
// Form all possible subset by using including or not including element while traversing
// the array and the other array will be all elements left in first subarray
// Return min of the difference of the subsets  if the current element is included in the
// first subarray or not .

#include "bits/stdc++.h"

using namespace std;



int main(){
    cout<<"No of elements \n";
    int n;
    cin>>n;
    int arr[n];


    cout<<"Enter elements \n";
    for (int i = 0; i < n; i++)  cin>>arr[i];

    cout<<"Enter difference\n";
    int diff;
    cin>>diff;

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
                if(arr[i-1] > j){  // if current element greater than subproblem subarray sum 
                    dp[i][j]=dp[i-1][j];
                }else  //  if current element less or equal to subproblem subarray sum 
                     dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
            }
        }
    }

    
    int subsets=0;

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=arrSum/2;j++){  // other half subsets will yield same absolute difference
    //         int difference= arrSum- j * 2 ;
    //         if(dp[i][j] && diff==abs(difference)){
    //             subsets++;
    //         }
    //     }
    // }

    for (int i = 0; i <= n; i++)
    {
        if(dp[i][(diff+arrSum)/2]  ){
            subsets++;
        }
    }
    



    cout<<"Subsets with given difference are "<<subsets;

    return 0;
}