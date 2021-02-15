#include "bits/stdc++.h"

using namespace std;

// grid indexing is 1 based

 long long  ways(long long** grid,int m,int n){
    if(m==0 || n==0) return 0;
    if(m==1 || n==1) return 1;

    if(grid[m][n]==-1){
        grid[m][n]=ways(grid,m-1,n) + ways(grid,m,n-1);
    }

    return grid[m][n];
}



int main(int argc, char){
int m,n;
cout<<"Enter rows and columns \n";
cin>>m>>n;

long long** grid=new long long*[m+1];

for(int i=0; i < m+1; i++){
    grid[i]=new long long[n+1];
}


for (int i = 0; i < m+1; i++)
{
    for (int j = 0; j < n+1; j++)
    {
       grid[i][j]=-1;
    }
}


cout<<"\nPossible ways are \n"<<ways(grid,m,n);
    return 0;
}