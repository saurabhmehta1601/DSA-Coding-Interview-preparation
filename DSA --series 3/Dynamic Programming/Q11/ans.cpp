#include "bits/stdc++.h" 

using namespace std;




int main(int argc, char const *argv[])
{
    cout<<"Enter no of elements \n";
   int n;
   cin>>n;

   int p[n],w[n];
    cout<<"Enter elements weights \n";
   for(int i=0; i<n; i++) cin >>w[i];

    cout<<"Enter prices \n";
    for(int i=0; i<n; i++) cin >>p[i];


    cout<<"Enter knapsack capacity";
    int C;
    cin>>C;

    int dp[n+1][C+1];

   for(int i=0; i<=n; i++){
       for (int j = 0; j <= C; j++)
       {
          if(i==0 || j==0 ) dp[i][j]=0; 
        else{
            if(w[i-1] > j ){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]= max(dp[i-1][j],p[i-1] + dp[i][j-w[i-1]]);
            }
        }
       }
       
   }
   cout<<"max profit " <<dp[n][C];

    return 0;
}
