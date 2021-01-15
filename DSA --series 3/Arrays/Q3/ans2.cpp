// XOR of all array n-1 elements =X1
// XOR of all natural numbers upto n  =X2
// for any no t -- t^t is zero
// for any any no p -- p^0 is p
// so X1^X2 will give the missing number.


#include "bits/stdc++.h"
using namespace std;


int getMissingNumber(int arr[],int n) {

    int X1=1;

    for (int i = 2; i <= n; i++)
    {
       X1=X1^i;
       }
       
    int X2=arr[0];

    for (int i = 1; i < n-1; i++)
    {
       X2=X2^arr[i];
    }

    return X1^X2;
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
