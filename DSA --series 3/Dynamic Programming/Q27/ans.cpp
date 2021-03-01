// Recursive solution

#include "bits/stdc++.h"
using namespace std;

bool isPaliondrome(string s,int i,int j){
     j=j-i+1;
    string s1=s.substr(i,j);
    string s2=s1;
    reverse(s1.begin(),s1.end());

   return s1==s2;
}

int PP(string str,int i,int j){

    if(i>=j || isPaliondrome(str,i,j) ) return 0;
    else{
        int ans=INT_MAX-4;
        int k;
        for(k=i;k<j;k++){
                int left=PP(str,i,k);
                int right=PP(str,k+1,j);
                int temp=1+left+right;
            ans =ans > temp ? temp:ans;
        }
        return ans;
    }
}



int main(){
    string str;cin>>str;
    cout<<PP(str,0,str.size()-1);
}