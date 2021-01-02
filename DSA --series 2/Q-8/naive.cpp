#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int getElement(vector<int>& vec,int& k){
        int n=vec.size();
        sort(vec.begin(),vec.end());
        return vec[n-k];
    }
};

int main(int argc, char const *argv[])
{   
    cout<<"Enter which largest element you want \n";
    int k;
    cin>>k;
    
    cout<<"Fill the array ";
    vector<int> v;
    int x;

    while (cin>>x)
    {
        v.push_back(x);
    }
    


    Solution s;
    cout<<s.getElement(v,k);
}
