#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isAnagram(string s1,string s2){
        if(s1.size()!=s2.size()) return false;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1==s2;
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
        cout<<"no anagrams";
    }
    return 0;
}
