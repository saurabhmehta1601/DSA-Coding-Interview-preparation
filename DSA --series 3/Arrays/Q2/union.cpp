// O(m+n)  where m and n are sizes of arrays

#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2;
    cout<<"Enter set sizes\n";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    vector<int> v;

    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    
for (int j = 0; j < n2; j++)
    {
        cin>>arr2[j];
    }
    
int i=0,j=0;
while(i<n1 and j<n2){
    if(arr1[i]<arr2[j])
{
    v.push_back(arr1[i++]);
}else if(arr1[i] > arr2[j])
{
      v.push_back(arr2[j++]);
}else{
    v.push_back(arr1[i++]);
    j++;
}

}
while(i<n1){
v.push_back(arr1[i++]);;
}

while(j<n2){
v.push_back(arr2[j++]);;
}


cout<<"Union is :\n";
for(int x:v){
    cout<<x<<" ";
} 
    return 0;
}
