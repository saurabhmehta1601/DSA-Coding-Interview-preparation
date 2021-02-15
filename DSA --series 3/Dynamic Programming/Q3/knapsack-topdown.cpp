// Top Down Version contains no recursion 
// We will fill the grid first


#include<bits/stdc++.h>
using namespace std;

#define LL long long    //8 bytes capacity 10e18
#define LD long double  //16 bytes capacity 10e30
#define VI vector <int>
#define VC vector <char>
#define MSI map<string,int>
#define MII map<int,int>
#define maxPQI priority_queue<int> //Max heap
#define minPQI priority_queue<int,vector<int>,greater<int> >//min heap
#define REP(i,a,b) for(int i=a;i<=b;i++) 
#define PB(x) emplace_back(x)
#define MP(A,B) make_pair(A,B)

void fast_io(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
// User definer functions here

// Main knapsack function to fill the table



int main(){
fast_io();

//     Code put here

int C=7; //Max capacity

int n=5;


int w[n]={1,2,2,2,2}; //weight of commodities
int p[n]={1,2,3,4,5}; //price of commodities

// Store solution of subproblems with different C capacities and different no of n commodities ;

int dp[n+1][C+1];

for (int i = 0; i <= n; i++)
{
   for(int j=0;j<=C;j++){
       if(i==0 || j==0){ //profit =0 when items are 0 or capacity is 0.
           dp[i][j]=0;
       }else{
           if(w[i-1]>C){
           dp[i][j]=dp[i-1][j];
    }else{
           dp[i][j]=max(p[i-1]+dp[i-1][C-w[i-1]],dp[i-1][C]);
    }
       }
    
   }
}

cout<<dp[5][7];

return 0;
}