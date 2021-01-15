#include "bits/stdc++.h"
using namespace std;

void printNGE(int a[],int n){

stack<int> s;
s.push(a[0]);

   for (int i = 1; i < n; i++)
   {
      if(s.empty()){
          s.push(a[i]);
          continue;
      }

    while(!s.empty() && s.top()< a[i]){
        cout<<s.top()<<"-->"<<a[i]<<endl;
        s.pop();
    }s.push(a[i]);

   }
   while(!s.empty())
       {
           cout<<s.top()<<"--> -1"<<endl;
           s.pop();
       }
}



int main()
{
    int arr[] = {11, 13, 21, 3}; 
  int n = sizeof(arr) / sizeof(arr[0]); 

  printNGE(arr, n); 
  return 0; 
    return 0;
}
