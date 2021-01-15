// O(n)

#include "bits/stdc++.h"
using namespace std;

int minDistance(int arr[],int n,int x,int y){
    int min_distance=INT_MAX;
    int prev=-1; 
    for(int i=0;i<n;i++){

        if((arr[i]==x || arr[i]==y )&& prev==-1){
            prev=i;
        }else if((arr[i]==x || arr[i]==y )&& prev!=-1)
        {
            min_distance=min(min_distance,i-prev);
            prev=i;
        }
        
    } return min_distance;
    
    }




int main(int argc, char const *argv[])
{
     int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 3; 
    int y = 6; 
    cout<<minDistance(arr,n,x,y);
    return 0;
}

