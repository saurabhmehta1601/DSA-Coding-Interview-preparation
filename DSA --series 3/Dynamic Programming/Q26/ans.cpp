// Recursive solution for MCM

#include "bits/stdc++.h"
using namespace std;

int MCM(int arr[],int i,int j){
    if(i >=j ) return 0;
    int ans=INT_MAX;
    int k;


    for(int k=i;k<j;k++){

        int temp=MCM(arr,i,k) + MCM(arr,k+1,j) + arr[i-1] * arr[k] * arr[j];
        ans=min(temp,ans);
    }

    return  ans;
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

    cout<<"Min no of multiplications are "<<MCM(arr,1,n-1);



    return 0;
}