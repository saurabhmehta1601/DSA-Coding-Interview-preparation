#include <bits/stdc++.h> 
using namespace std ; 

class Graph{
    int V; // no of vertices
    list <int> *l; 
    public:
        Graph(int V){  //constructor
            this->V =V;
            l=new list<int> [V] ;
        }

        void add_edge(int a,int b){
            l[a].push_back(b);
            l[b].push_back(a);
        }
        void print(){
            for(int i=0;i<V;i++){
                cout<<"Vertex "<< i<<" ---> ";
                for(int x : l[i]){
                    cout<<x<<" ,";
                }cout<<'\n';
            }
        }
};



int main ()
{

    Graph g(4);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(2,3); 
}