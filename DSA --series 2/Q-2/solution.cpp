// O(n)

#include <bits/stdc++.h>

using namespace std;



class Solution{
public:
    int getMaxLength(vector<int> arr){
            int n=arr.size();
            int i=0;
            int maxLength=0;
            while (i<n){
                int length=0;
               while (arr[i]==1)
               {
                  length++;
                   i++;
               }
              maxLength=max(maxLength,length);
              i++;
            }
            return maxLength;
            
    }

};

int main()
{
    vector<int> v={1,1,1,1,0,1,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,1,0,1,0,1,1,0};
Solution s;
cout<<s.getMaxLength(v);

} 