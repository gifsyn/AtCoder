
#include <iostream>
#include <vector>

using namespace std;


long long N, Q;
long  long ans[200001];
bool visited[200001];
vector<int> T[200001];


void dfs(int r, long long p){
    visited[r] = true;
    ans[r] = p;
    for(int i = 0; i < T[r].size(); i++){
        int to = T[r][i];
        if(visited[to] == false){
            dfs(to, ans[r]+ans[to]);
        }
    }
}


int main(){
    cin >> N >> Q;
    for(int i = 0; i < N-1; i++){
        int a, b;
        cin >> a >> b;
        a --; b --;
        T[a].push_back(b);
        T[b].push_back(a);
    }

    for(int i = 0; i < Q; i++){
        int p, x;
        cin >> p >> x;
        p--;
        ans[p] += x;
    }

    dfs(0, ans[0]);


    for(int i = 0; i < N; i++){
        if(i != N-1){
            cout << ans[i] << " ";
        }else{
            cout << ans[i] << endl;
        }
    }


    return 0;
}