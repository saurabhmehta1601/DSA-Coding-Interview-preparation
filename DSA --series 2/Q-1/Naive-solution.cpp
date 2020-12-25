// O(n^2)

// Strategy--
//          use two nested loops to find two numbers of vector
//          which are not same and add up to given number


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public :
        vector<int> getIndices(vector<int>& ar,int result){
            int n=ar.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i!=j && ar[i]+ar[j]==result){ return vector<int> {i,j};}
                }
            }
                return vector<int> {};        
        }

};

int main(){

Solution* problem=new Solution();
vector<int> v={1,2,3,4,5,6};

vector<int> ans= problem->getIndices(v,18);

if(ans.size()){
    for(int x:ans){
    cout<<x<<" ";
}
}else{
    cout<<"No such pair found \n";
}


}