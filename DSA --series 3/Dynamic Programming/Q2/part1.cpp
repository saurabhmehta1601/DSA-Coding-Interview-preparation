#include "bits/stdc++.h"
using namespace std;

bool canSum(int arr[],int n,int target,short int memo[]){
    if(target==0) return true;
    if(target<0) return false;

    if(memo[target]==1) return true;
    else if(memo[target]==-1) return false;

    if(memo[target]==0){
       for(int i=0; i < n; i++){
           if(canSum(arr,n,target-arr[i],memo)){
               memo[target]=1;
               return true;
           }
       }
    }

}


int main(int argc, const char** argv) {

    int target;
    cout<<"Enter target value\n";
    cin>>target;

    int n;
    cout<<"Enter array size\n";
    cin>>n;

    int arr[n];
    short memo[target+1]={0};
   
    cout<<"Enter array elements\n";
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }


    cout<<"-------------------------\n";

    if(canSum(arr,n,target,memo)){
        cout<<"Target can be achieved \n";
    }else{
        cout<<"Target cannot be achieved\n";
    }

    return 0;
}