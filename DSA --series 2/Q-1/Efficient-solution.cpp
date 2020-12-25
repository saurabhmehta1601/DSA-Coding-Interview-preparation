// O{n*logn}

// Approach --
            // make another vector copyVector and copy values so that we can get the original order of numbers
            // from the copy array after applying sorting on original array
            // now sort the original vector
            // Now use two pointer technique to find numbers whose sum equals result
            // check for these numbers in copyVector and find there location

// Two pointer technique
        // step 1--    for sorted array take a pointer to first element and other to last element 
        // step 2--    if required sum is greater than resulting sum move first pointer forward
        //     else decrease last pointer .
        // step 3--    repeat step 2 until first pointer doesn't cross second pointer


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> getIndices( vector<int>& arr,int result){
        int n=arr.size();

        vector<int> original=arr;

        sort(arr.begin(),arr.end());

        int x=0,y=n-1; //Two pointers
        int num1,num2;
        while(x<y){
            if(arr[x]+arr[y]==result){
                num1=arr[x];
                num2=arr[y];
                break;}
            else if (arr[x]+arr[y]>result)
            {
                y--;
            }
            else
            {
               x++;
            }
            
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(original[i]==num1){
                ans.push_back(i);
            }
        }
             for(int i=0;i<n;i++){
            if(original[i]==num2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};


int main()
{

    vector<int> v={1,6,87,2,8,9,34};
  Solution p;
    vector<int> ans=p.getIndices(v,43);

    cout<<ans[0]<<" "<<ans[1];
} 
