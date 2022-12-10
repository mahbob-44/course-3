
#include<bits/stdc++.h>
using namespace std;
#define edgeweightpair pair<int, int>

class graph{
    int V;
    list<edgeweightpair> *adj;
    
public:
    graph(int V){
        this->V=V;
        adj=new list<edgeweightpair> [V];
    }

    void addedge(int u, int v, int w){
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void printneighbour(int chk){
        cout<<chk<<": ";
        for(auto i=adj[chk].begin(); i!=adj[chk].end();i++){
            cout<<"("<<(*i).first<<","<<(*i).second<<")";
        }
        cout<<endl;
    }
    
};

int main(){
    int v, e;
    cin>>v>>e;
    graph g(v);
    for(int i=0;i<e;i++){
    	int u,v,w;
    	cin>>u>>v>>w;
        g.addedge(u,v,w);
    }
    for(int i=0;i<v;i++){
        g.printneighbour(i);
    }
}
/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 4 4
5 4 6
2 5 8
*/