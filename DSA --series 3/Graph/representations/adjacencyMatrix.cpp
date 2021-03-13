#include <bits/stdc++.h> 
using namespace std ;  

// works in O(1) finding edge
void isConnected(int n1,int n2,int matrix[][4]){
    cout<<"First node :"<<n1<<'\n';
    cout<<"Second node :"<<n2<<'\n';

    if(matrix[n1][n2]==1){
        cout<<"Connected \n";
    }else{
        cout<<"Not connected \n";
    }
}

// print graph 
void print(int matrix[][4]){
    for(int i=0;i<4;i++){
        cout<<i<<"--->";
        for(int j=0;j<4;j++){
            if(matrix[i][j]==1) cout<< j <<", ";
        }cout<<'\n';
    }
}

int main ()
{
    // n nodes require n x n matrix 
    // Matrix can be also made using dynamic memory allocation
 int matrix[4][4]={
    {0,1,1,1},  //row 0 shows connections of node 0
    {1,0,0,1},  //row 1 shows connections of node 1
    {1,0,0,1},  //row 2 shows connections of node 2
    {1,1,1,0}   //row 3 shows connections of node 3
} ;



isConnected(0,1,matrix);
print(matrix);
}