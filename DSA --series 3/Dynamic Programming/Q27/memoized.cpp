#include "bits/stdc++.h"
using namespace std;

bool isPaliondrome(string s,int i,int j){
    j=j-i+1;
    string s1=s.substr(i,j);
    string s2=s1;
    reverse(s1.begin(),s1.end());

   return s1==s2;
}

int PP(string str,int i,int j,int** dp)
{
    if(i>=j || isPaliondrome(str,i,j)) return 0;

    if(dp[i][j]!=-1){
        return dp[i][j];
    }else{
        
        dp[i][j]=INT_MAX-4;
        int k;
        for( k=i;k<j;k++){
            int left,right;
            if(dp[i][k]==-1){
                left=PP(str,i,k,dp);
                dp[i][k]=left;
            }else
             left=dp[i][k];

            if(dp[k+1][j]==-1){
             right=PP(str,k+1,j,dp);
             dp[k+1][j]=right;
           } else{
               right=dp[k+1][j];
           }
        int temp = 1 + left + right;
        dp[i][j]=min(dp[i][j],temp);
        }

        return dp[i][j];
    }
   
}


int main(){
    string str;
    cin>>str;
    int n=str.size();
    
    int **dp=new  int*[n+1];

    for(int i=0;i<=n;i++){
        dp[i]=new  int[n+1];
    }


    for(int i=0;i<=n; i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=-1;
        }
    }

    cout<<PP(str,0,str.size()-1,dp);
    
    return 0;

}