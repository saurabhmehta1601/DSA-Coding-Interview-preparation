// O(n^2) 

// Scan all the elements from right to left in an array and keep track of maximum till now. When maximum changes its value, print it.


#include "bits/stdc++.h"
using namespace std;


void printLeaders(int arr[],int n){
    int max=INT_MIN;
   
        for (int i = n-1; i >= 0; i--)
    {
     if(arr[i]>max){
         max=arr[i];
         cout<<max<<" ";
     }   
    } 
}

int main(int argc, char const *argv[])
{
    
    int arr[] = {16, 17, 4, 3, 5, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printLeaders(arr, n); 
    return 0; 
}

