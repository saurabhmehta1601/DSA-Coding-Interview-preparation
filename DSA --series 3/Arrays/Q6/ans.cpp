#include "bits/stdc++.h"

using namespace std;

int findMajorityElement(int arr[],int n){
    int maj_elem=arr[0];
    int count=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==maj_elem)
        count++;
        else
        {
            count--;
        }
        if(count==0){
            maj_elem=arr[i];
        }
        
    }return maj_elem;
    
}

bool isMajorityElement(int arr[],int n,int maj_elem){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==maj_elem)
        count++;
    }
    if(count>n/2){return true;}
    else
    {
        return false;
    }
    
}



int main(int argc, char const *argv[])
{

  int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
     
    // Function calling 
    int ans=findMajorityElement(arr, n); 
    if(isMajorityElement(arr, n,ans)){
        cout<<"Majority element is "<<ans<<endl;}
    else{
        cout<<"NO majority element";
    }
    
 

    return 0;
}
