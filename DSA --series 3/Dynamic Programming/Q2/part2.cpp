#include "bits/stdc++.h"
using namespace std;

bool howSum(int arr[],int n,int target,short int memo[],vector<int> &ans){
    if(target==0) {
        for(int x:ans){
            cout<<x<<" ";
        }
        ans.clear();
        cout<<'\n';
        return true;
        }
    if(target<0) { ans.clear(); false;}

    if(memo[target]==1) return true;
    else if(memo[target]==-1) return false;

    if(memo[target]==0){
       for(int i=0; i < n; i++){
           if(howSum(arr,n,target-arr[i],memo,ans)){
               memo[target]=1;
               ans.push_back(arr[i]);
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

    vector<int> ans;

    int arr[n];
    short memo[target+1]={0};
   
    cout<<"Enter array elements\n";
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }


    cout<<"-------------------------\n";

    if(howSum(arr,n,target,memo,ans)){

    }else{
        cout<<"No possible combinations \n";
    }
    

    return 0;
}