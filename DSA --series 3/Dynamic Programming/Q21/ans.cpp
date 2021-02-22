#include "bits/stdc++.h"
using namespace std;



int main(int argc, char const *argv[])
{
    string str1;
    cout<<"Enter string \n";
    cin>>str1;

    // str2 will be the reverse of string 1
    string str2=str1; //str2 is str1
    reverse(str1.begin(), str1.end()); // str1 is reversed string

    int n=str1.size();
    int dp[n+1][n+1]; //both are size sized (since reversed strings)

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++){
            if(!i || !j ) dp[i][j] =0;
            else{
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                }else{
                    dp[i][j]= max( dp[i][j-1], dp[i-1][j]);
                }
            }
        }
    }

    int LPS= dp[n][n];

    cout<<"Deletions "<< str1.size()-LPS<<endl;
    return 0;
}
