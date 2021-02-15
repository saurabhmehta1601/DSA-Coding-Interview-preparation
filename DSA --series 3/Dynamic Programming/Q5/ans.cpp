#include<bits/stdc++.h>
using namespace std;


int main(){
	
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}

int target;
cin>>target;
	
bool dp[n+1][target+1];

for(int i=0;i<=n;i++){
	for(int j=0;j<=target;j++){
		if(i==0 && j!=0) {
			dp[i][j]=false;
			continue;
		}
		if(j==0) {
			dp[i][j]= true;
			continue;
		}
		
		if(arr[i-1]<=j){
			dp[i][j]= dp[i][j-arr[i-1]] || dp[i-1][j];
		}else{
			dp[i][j]=dp[i-1][j];
		}	
}}	

if(dp[n][target]){
	cout<<"target sum is possible \n";
}else{
	cout<<"target sum not possible \n";
}


return 0;}