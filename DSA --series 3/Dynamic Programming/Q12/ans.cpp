#include "bits/stdc++.h"

using namespace std;




int main(int argc, char const *argv[])
{
    cout<<"Length of Rod \n";
    int L;
    cin>>L;

    cout<<"Enter rod length Prices ";
    int p[L];

    for(int i=0; i<L; i++){
        cout<<"Price of rod of length "<<i+1<<" :  ";
        cin>>p[i];
    }
    int l[L];
    for (int i = 0; i < L; i++) l[i] = i+1;
    
    

 int dp[L+1][L+1]; //prices of rod pieces 

    for (int i = 0; i <= L; i++){
        for(int j = 0; j <= L; j++){

            if(i==0) return 0; //Rod not cut
            if(j==0) return 0; //Rod of length 0

            if(i && j){
                if( l[i-1] > j){   //rod piece having greater length than subproblem rod length
                    dp[i][j]= dp[i-1][j];
                }else{
                    dp[i][j]= max( dp[i-1][j], dp[i][j-l[i-1]] + p[i-1]);
                }
            }
        }
    }

    cout<<"Max price on cutting rod is "<<dp[L][L];
    return 0;
}
