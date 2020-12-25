// Components we're gonna have
// 1.element pair<ar[i],i> to store all elements of given vector with their index
// 2.container vector that will hold all these pairs

// Now sort the container vector on basis of first member of its pair elements
// Use two pointer technique to compare using element.first and to then make vector of these pairs 
// return indices from these pairs using element.second


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
vector<int> getIndices(vector<int>& arr,int result){

    vector<pair<int,int>> container;
    int i=0;
    for(int x:arr){
        container.push_back(pair<int,int> {x,i});
        i++;
    }

    sort(container.begin(),container.end());

    int x=0,y=arr.size()-1;

    while (x<y)
    {
       if( container[x].first + container[y].first ==result){
           return vector<int> {container[x].second,container[y].second};
       }else if( container[x].first + container[y].first > result)
       {
        y--;   
       }else{
           x++;
       }
       
    }return vector<int> {};
    

}
};




int main(){

  vector<int> v={1,6,87,2,8,9,34};
  Solution p;
    vector<int> ans=p.getIndices(v,43);

    cout<<ans[0]<<" "<<ans[1];

}
