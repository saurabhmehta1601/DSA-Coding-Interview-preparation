#include <bits/stdc++.h> 
using namespace std ; 

unordered_map<int,vector<int>> graph;

// print graph
void print(){
    for(auto p : graph){
        cout<<p.first<<"--->";
        for(int t : p.second ){
            cout<<t<<" ,";
        }cout<<'\n';
    }
}

// adjacency list
int main ()
{

int nodes[]={1,2,4,5,6,7};

int n= sizeof(nodes)/sizeof(nodes[0]);

while(n--){ 
    
    cout<<"Enter neighbours of " <<nodes[n]<<'\n';
    cout<<"Press -1 to end entering neighbours \n";
    int x;

    while (1)
    {   
        cin>>x;
        if(x==-1){
            break;
        }
        graph[nodes[n]].push_back(x);
    }
}

print();

}