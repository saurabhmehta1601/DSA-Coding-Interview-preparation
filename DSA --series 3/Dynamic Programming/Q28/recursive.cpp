#include "bits/stdc++.h"
using namespace std;


int solve(string str,int i,int j,bool isTrue){
    if(i > j) return 1;
    if(i==j){
        return ( (isTrue==true and str[i]=='T') || (isTrue==false and str[i]=='F')) ? 1:0;
       
    }
    int ans=0;
    for(int k=i+1;k<j;k+=2){
        int LT= solve(str,i,k-1,true);
        int LF= solve(str,i,k-1,false);
        int RT= solve(str,k+1,j,true);
        int RF= solve(str,k+1,j,false);

        if(str[k]=='&'){
            ans+= isTrue ? LT*RT : LT*RF + LF*RT + LF*RF;
        }else if (str[k]=='|'){
            ans+= isTrue ? LT*RT + LT*RF + LF*RT : LF*RF ; 
        }else{
            ans+= isTrue ? LT*RF + RT*LF : LF*RF + LT*RT ;
        }
    }
    return ans;

}

int main(){
    string str;
    cin>>str;

    cout<<solve(str,0,str.size()-1,true);
    return 0;
}