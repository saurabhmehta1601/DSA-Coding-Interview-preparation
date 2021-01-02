//O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    bool containsNearbyDuplicates(vector<int> vec,int k){
      
        for (int i = 0; i < vec.size(); i++)
        {
           for (int j = i+1; j <= i+k; j++)
           {
              if(vec[i]==vec[j]) return true;
           }
           
        }
        return false;
    }

};



int main(){
cout<<"Nearby distance\n";
int k;
cin>>k;

Solution s;

cout<<"Enter the array\n";
vector<int> vec;
int x;
while (cin>>x)
{
   vec.push_back(x);
}
if(s.containsNearbyDuplicates(vec,k)){
    cout<<"Contains duplicates";
}else{
    cout<<" No duplicates neaby";
}
}