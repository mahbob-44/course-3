#include<bits/stdc++.h>
#define lld long long int
#define loop(n) for(int i=0;i<n;i++)
#define lop(m) for(int j=0;j<m;j++)
#define nline printf("\n")
#define cind(n) scanf("%d",&n)
#define cinlld(n) scanf("%lld",&n)
#define cinlf(n) scanf("%lf",&n)
#define coutd(n) printf("%d",n)
#define coutlld(n) printf("%lld",n)
#define coutlf(n) printf("%lf",n)
using namespace std;

class graph{
    int V;
    list<int>*adj;
public:
    graph(int v){
        this->V=v;
        adj=new list<int>[V];
    }

    void addedge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printneighbour(int u){
        coutd(u);
        cout<<": ";
        for(auto i=adj[u].begin();i!=adj[u].end();i++){
            coutd(*i);
            cout<<" ";
        }
        
        // Hello world
    }

    void bfs(int source, int v, int item){
        queue<int> k;
        k.push(source);
        vector<bool>visited(v,false);
        visited[source]=true;
        int level=0;
        while(!k.empty()){
            int u=k.front();
            // cout<<u<<" ";
            k.pop();
            level++;
            for(auto element: adj[u]){
                if(visited[element]==false){
                    if(element==item){
                        cout<<level;
                        return;
                    }
                    visited[element]=true;
                    k.push(element);
                }
            }

        }
    }

};

void solve(){
    int V,e,s;
    cin>>V>>e>>s;
    graph g(V);
    for(int i=0;i<e;i++){
        int u, v;
        cind(u);
        cind(v);
        g.addedge(u,v);
    }
    for(int i=0;i<V;i++){
        g.printneighbour(i);
    }
    nline;
    nline;
    int item;
    cin>>item;
    g.bfs(s,V,item);

}
int main(){
int t=1;
// cin>>t;
while(t--){
        solve();
    }
}