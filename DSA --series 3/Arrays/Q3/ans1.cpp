// sum of  first n elements is n*(n+1)/2
// subtract sum of these n-1 numbers of sum of n numbers 
// you'll get missing term.

#include "bits/stdc++.h"
using namespace std;

int getMissingNumber(int arr[],int n){

    int actual_sum=0;
    for (int i = 0; i < n-1; i++) //since n-1 elemnts in array
    {
        actual_sum+=arr[i];
    }

    return ((n)*(n+1))/2 - actual_sum;
    
}





int main(int argc, char const *argv[])
{
    int n;
    cout<<"Array length \n";
    cin>>n;
    int arr[n-1];
for (int i = 0; i < n-1; i++)
{
    cin>>arr[i];
}
    cout<<"Missing number is "<<getMissingNumber(arr,n);

    return 0;
}
