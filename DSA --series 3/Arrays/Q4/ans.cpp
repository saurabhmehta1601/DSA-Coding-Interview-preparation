// O(n^2)

// Take outer loop iterating over elements.
// Inner loop 
// if outer loop and inner loop points at x and y update distance if
// required.

#include "bits/stdc++.h"
using namespace std;

int minDistance(int arr[],int n,int x,int y){
    int distance=INT_MAX;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
           if(arr[i]==x && arr[j]==y && abs(i-j) < distance){
               distance=abs(i-j);
           }
        }
        
    }
    return distance;
}


int main(int argc, char const *argv[])
{
    int arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, 
x = 3, y = 2;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<minDistance(arr,size,x,y);
    return 0;
}

