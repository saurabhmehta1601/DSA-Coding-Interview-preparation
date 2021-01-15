#include "bits/stdc++.h"

using namespace std;


int getOddOccurrence(int arr[],int n){
    int ans=arr[0];
    for (int i = 1; i < n; i++)
    {
       ans=ans^arr[i];
    }
    return ans;
}




int main(int argc, char const *argv[])
{
     int arr[] = { 2, 3, 5, 4, 5, 2, 
                      4, 3, 5, 2, 4, 4, 2 }; 
        int n = sizeof(arr) / sizeof(arr[0]); 
  
        // Function calling 
        cout << getOddOccurrence(arr, n); 
    return 0;
}
