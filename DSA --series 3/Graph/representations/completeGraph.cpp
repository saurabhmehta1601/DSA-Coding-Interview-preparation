#include <bits/stdc++.h> 
using namespace std ; 

// Graph vectices denoted by string and can be birectional or not and edges have weights 

class Graph{
    unordered_map<string, list <pair<string,int> > > l;

    public:
       void add_edge(string src,string dest,int weight,bool bidirectional){
           l[src].push_back(make_pair(dest,weight));
           if(bidirectional){
            l[dest].push_back(make_pair(src,weight));
           }
       }
       void print(){
           for(auto x : l){
               cout<<x.first<<"--->";
               for(auto y : x.second){
                   cout<<"("<<y.first<<","<<y.second<<")"<<" ";
               }cout<<'\n';
           }
       }
} ;

int main ()
{
    Graph g;
    g.add_edge("A","B",20,true);
    g.add_edge("A","C",10,true);
    g.add_edge("A","D",50,false);
    g.add_edge("C","D",40,true);
    g.add_edge("B","D",30,true);

    g.print();
}