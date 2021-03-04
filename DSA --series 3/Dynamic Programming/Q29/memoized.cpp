#include <bits/stdc++.h> 
using namespace std ; 
 
 int solve(int e,int f,unordered_map<string,int> hm){
     if( f < 2 || e==1) return f;
     string temp=to_string(e)+" "+ to_string(f);
     if(hm.find(temp) !=hm.end() ){
         return hm[temp];
     }else{

         int mn=INT_MAX -4;

         for(int k=1;k<=f;k++){

         string temp1=to_string(e-1)+" "+ to_string(k); //egg broken
         if(hm.find(temp1)== hm.end()){
             hm[temp1]= solve(e-1,k-1,hm);
         }

         string temp2=to_string(e)+" "+ to_string(f-k); //egg not broken
         if(hm.find(temp2)== hm.end()){
             hm[temp2]= solve(e,f-k,hm);
         }

        mn=min(mn,1+ max(hm[temp1],hm[temp2]));
         }
         hm[temp]=mn;
        return hm[temp];
     }
 }

 
int main ()
{
int e,f;
cout<<"Enter eggs and floors \n";
cin>>e>>f;
unordered_map<string,int> hm;
cout<<solve(e,f,hm);

}