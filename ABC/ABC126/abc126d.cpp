
#include <iostream>
#include <vector>

using namespace std;

using Edge = pair<int, int>;
using Graph = vector< vector<Edge> >;

int N;
Graph G;
vector<int> res;


void dfs(int v, int p, int c){
    res[v] = c;
    for(auto e : G[v]){
        if(e.first == p){
            continue;
        }
        if(e.second % 2 == 1){
            dfs(e.first, v, 1-c);
        }else{
            dfs(e.first, v, c);
        }
    }
}


int main() {
    cin >> N;
    G.assign(N, vector<Edge>());
    for(int i = 0; i < N-1; i++){
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }

    res.assign(N, 0);

    dfs(0, -1, 1);

    for(auto v : res){
        cout << v << endl;
    }


    return 0;
}