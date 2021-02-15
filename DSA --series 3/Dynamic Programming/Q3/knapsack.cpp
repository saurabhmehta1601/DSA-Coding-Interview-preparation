// Memoized Version sometimes rarely due to recursive calls stack overflow can happen


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

// Main knapsack function
int maxPrice(int w[],int p[],int C,int n,int** &memo){
	
	if(n==0 || C==0) return 0;
	
	if(memo[n][C]==-1){
		if(w[n-1] > C){
			return maxPrice(w,p,C,n-1,memo);
		}else{
			memo[n][C]=max(p[n-1]+maxPrice(w,p,C-w[n-1],n-1,memo),maxPrice(w,p,C,n-1,memo));
		}
	}
	return memo[n][C];	
}




int main(){
fast_io();

//     Code put here
      
int n;
cin>>n;

int w[n],p[n];

int tw=0;

for(int i=0;i<n;i++){
    cin>>w[i]>>p[i];
    tw+=w[i];
}

int** dp =new  int*[n+1];

for(int i=0;i<=n;i++){
	dp[i]=new int[tw+1];
}

for(int i=0;i<=n;i++){
	for(int j=0;j<=tw;j++){
		dp[i][j]=-1;
	}
}


for(int i=1;i<=tw;i++){
    cout<<maxPrice(w,p,i,n,dp)<<" ";
}

return 0;
}