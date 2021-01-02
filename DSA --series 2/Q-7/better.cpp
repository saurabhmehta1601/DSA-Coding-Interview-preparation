#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isAnagram(string s1,string s2){
        if(s1.size()!=s2.size()) return false; 

        unordered_map<char,int> h; //store alphabets with their counts
        for(char x:s1){
            h[x]++;
        }
        for(char x :s2){
            h[x]--;
        }
        for(auto elem: h){ 
            if(elem.second!=0) return false;
        }
        return true;
    }
};


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    Solution s;

    if(s.isAnagram(s1,s2)){
        cout<<"They're anagrams";
    }else{
        cout<<"no they are'nt anagrams";
    }
    return 0;
}
