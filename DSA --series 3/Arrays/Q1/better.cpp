// O(n)

 #include "bits/stdc++.h"
 using namespace std;

int maxLengthSubarray(int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++){
        arr1[i]-=arr2[i]; //arr1 stores differences
    }

    unordered_map<int,int > hM;
    int max_length=0;
    int sum=0; //gives cumulative sum of differences
    for (int i = 0; i < n; i++)
    {
        sum+=arr1[i];
        if(sum==0){
            max_length++;
        }

        if(hM.find(sum)!=hM.end()){ //since sum is equal at two indices meaning sum between them is zero since sum of differences is zero thus they were equal .
                max_length=max(max_length,i-hM[sum]);
        }else{
            hM[sum]=i;
        }
    }
    
    return max_length;
}

 int main(int argc, char const *argv[])
 {
 
int arr1[] = {0, 1, 0, 1, 1, 1, 1};
    int arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << maxLengthSubarray(arr1, arr2, n);
    return 0;
 }
 