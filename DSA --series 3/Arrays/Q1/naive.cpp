// O(n^2) Simple Solution
// Find all combinations of subarrays and then find the subarrays having equal sum 
// and max length

// Outer loop gives starting index of subarray i.e. i.
// Inner loop gives ending index of each subarray i.e. j 

#include<bits/stdc++.h>
using namespace std;

int getLength(int arr1[],int arr2[],int n){
   
    int max_length=0;

    for (int i = 0; i < n; i++)
    {
        int sum1=0,sum2=0;

       for (int j = i; j < n; j++)
       {
           sum1+=arr1[j];
           sum2+=arr2[j];

           if(sum1==sum2){
           int current_length=j-i+1;
           max_length=max(max_length,current_length);
       }
       }
       
    }
   return max_length;
}


int main(int argc, char const *argv[])
{


    cout<<"enter array length\n";
    int n;
    cin>>n;

    int arr1[n],arr2[n];

cout<<"Enter array 1 elements \n";
    for (int i = 0; i < n; i++)
    {
       cin>>arr1[i];
    }

    cout<<"Enter array 2 elements \n";
    for (int i = 0; i < n; i++)
    {
       cin>>arr2[i];
    }
    
    cout<<"Ans is "<<getLength(arr1,arr2,n);

    return 0;
}
