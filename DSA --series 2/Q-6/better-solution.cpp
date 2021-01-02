#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    bool containsNearbyDuplicate(vector<int> vec,int k){

        int n =vec.size();
        unordered_map<int,int> h; //hashmap to store values and indices
       for (int i = 0; i < n; i++)
       {
          if(h.find(vec[i])!=h.end()) //if present in hashmap
          {
              if(i-h[vec[i]]<k){ return true;} //present at nearby distance return true
              else{
                    h[vec[i]]=i;   //update the new location
              }
          }else{ //add entry in hashmap with value and its index
                h[vec[i]]=i;
          }
       }return false;
       
    }
};



int main(int argc, char const *argv[])
{
    cout<<"Enter max nearby distance \n";
    int k;
    cin>>k;
    cout<<"Enter values in list \n";
    vector<int> v;

    int x;
    while (cin>>x)
    {
      v.push_back(x);
    }
    

    Solution s;
   
    if( s.containsNearbyDuplicate(v,k)){
        cout<<"It contains nearby duplicates";
    }else{
        cout<<" no nearby duplicates ";
    }


    return 0;
}
