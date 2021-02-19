// Recursive

#include "bits/stdc++.h"
using namespace std;

int LCS(string x,string y,int n,int m){

    if(n==0 ||m==0) return 0;

    if(x[n-1]==y[m-1]) 
        return 1+ LCS(x,y,n-1,m-1);
    else{
        return max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
    }
}



int main(int argc, char const *argv[])
{
    string str1,str2;
    cout<<"Enter string 1  :  "; cin>>str1;
    cout<<"Enter string 2  :  "; cin>>str2;
    cout<<LCS(str1,str2,str1.length(),str2.length());
    return 0;
}


