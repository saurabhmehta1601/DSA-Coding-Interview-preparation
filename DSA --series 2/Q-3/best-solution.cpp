//  Biggest three integers max1>=max2>=max3
// Smallest two integers min1<=min2

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxProduct(vector<int>& arr){
        int n=arr.size();
        int max1,max2,max3,min1,min2;
        
        max1=max2=max3=INT_MIN;
        min1=min2=INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]>max1){
                max3=max2;
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2){
                max3=max2;
                max2=arr[i];
            }
            else if(arr[i]>max3){
                max3=arr[i];
            }
            else if(min1<arr[i]){
                min2=min1;
                min1=arr[i];
            }
            else if(min2<arr[i]){
                min2=arr[i];
            }
        }
        

        int p1=max1*max2*max3;
        int p2=min1*min2*max1;
        return max(p1,p2);
    }
};




int main(){

vector<int> v={-10,2,3,4,-5,6,7};
    Solution s;
    cout<<s.maxProduct(v);


}