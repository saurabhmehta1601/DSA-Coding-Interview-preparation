#include "bits/stdc++.h"
using namespace std;

int MCM(int arr[],int i,int j,int** dp){
    if(i>=j) return 0;

    if(dp[i][j]!=-1){
       return dp[i][j];
    }

    int k;
    dp[i][j]=INT_MAX;

    for(k=i;k<j;k++){
        int temp=MCM(arr,i,k,dp) + MCM(arr,k+1,j,dp) + arr[i-1] * arr[j] * arr[k]; 
        dp[i][j]=min(dp[i][j],temp); 
    }

    return dp[i][j];
}

int main(){

    cout<<"Enter no of elemnts \n";
    int n;
    cin>>n;
    int arr[n];
     cout<<"Enter elemnts \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int** dp =new int*[n];
    for(int i=0; i<n; i++){
        dp[i] =new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] =-1;
        }
        
    }
    


     cout<<"Min no of multiplications are "<<MCM(arr,1,n-1,dp);

}