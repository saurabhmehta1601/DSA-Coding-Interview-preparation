#include "bits/stdc++.h"
using namespace std;

class Solution{
    public:
    vector<vector<int>> pairs(vector<int>& nums1,vector<int>& nums2,int k){
        int i=0,j=0;
        vector<vector<int>> smallPairs;
        smallPairs.push_back(vector<int> {nums1[0],nums2[0]});
        while(k--){
            nums1[i]>nums2[j]?j++:i++;
            smallPairs.push_back(vector<int> {nums1[i],nums2[j]});
        
       
    } return smallPairs;
    }
};


int main(int argc, char const *argv[])
{
   cout<<"Enter no of smallest pairs\n";
   int k;
   cin>>k;

     vector<int> nums1,nums2;

    cout<<"Enter array 1 length \n";
    int n1;
    cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        int t;
        cin>>t;
        nums1.push_back(t);
    }
    
    cout<<"Enter array 2 length \n";
    int n2;
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        int t;
        cin>>t;
        nums2.push_back(t);
    }

    if(k!=nums1.size() || k!=nums2.size()) {
        cout<<"Smallest set numbers should be  equal to num1== num2 size";
    }
    Solution s;
    vector<vector<int>> ans=s.pairs(nums1,nums2,k);

    for(auto x: ans){
        cout<<"[";
        for(auto y :x){
            cout<<y<<" ";
        }cout<<"]"<<'\n';
    }
   end:
    return 0;
}
