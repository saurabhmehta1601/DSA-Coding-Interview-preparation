#include<bits/stdc++.h>
using namespace std;




int main(int argc, char const *argv[])
{
    cout<<"Enter array size \n ";
int n;
cin>>n;

    cout<<"Enter array elements \n";

    int arr[n];
    for(int i=0; i<n; i++) { cin>>arr[i]; }

    int sum=0;
    for(int i=0; i<n; i++) sum+=arr[i];

    if(sum & 1) cout<<"Possible solution doesn\'t exists";
    else{
        sum=sum/2;
        bool dp[n+1][sum+1];

       for (int i = 0; i <=n; i++)
       {
           for (int j = 0; j <= sum; j++)
        {
           if(i==0) dp[i][j]=false;
           if(j==0) dp[i][j]=true;

           if(i && j)dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
        }
       }

        cout<<"---------------------------\n";   
        if(dp[n][sum]){
            cout<<"Possible solution exists ";
        }else{
            cout<<"Possible solution doesn\'t exists ";
        }
    }
    return 0;
}
