// Greedy Approch

#include "bits/stdc++.h"

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int sum; cin >>sum;
    
    sort(arr,arr+n);
    int j=n-1;

    int coins=0;

    while(j>0 and sum > 0 ){
        if(sum < arr[j]) j--;
        else
          { sum-=arr[j]; coins++; }
    }

    if(sum==0) {
        cout<<"min no of coins "<<coins;
    }else{
        cout<<" sum cannnot be achieved";
    }

    return 0;
}

