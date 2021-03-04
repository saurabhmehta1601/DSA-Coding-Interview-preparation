#include <bits/stdc++.h> 
using namespace std ; 
 
int solve(int e,int f){
    if( e==1 || (f < 2)) return f;

    int mn=INT_MAX-4;

    for(int k=1; k <= f; k++){
        mn=min(mn, 1 + max(solve(e-1,k-1),solve(e,f-k)));
    }

    return mn;
}

 
int main ()
{
    cout<<"Enter no of floors and eggs \n";
int f,e;
cin>>f>>e;

cout<<solve(e,f);
}