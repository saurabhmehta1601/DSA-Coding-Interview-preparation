// O{n*logn}


#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:
    int maxProduct(vector<int>& arr){
        int n=arr.size();
        sort(arr.begin(),arr.end());

        int p1=arr[n-1]*arr[n-2]*arr[n-3]; 
        int p2=arr[n-1]*arr[0]*arr[1];
    
    return max(p1,p2);    }
};



int main(){
    vector<int> v={-10,2,3,4,-5,6,7};
    Solution s;
    cout<<s.maxProduct(v);
}

