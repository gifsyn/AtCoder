
#include <iostream>

using namespace std;

const int limit = 50;

int N, M;
int a[limit], b[limit];

bool G[limit][limit];
bool visited[limit];


void dfs(int v){
    visited[v] = true;
    for(int v2 = 0; v2 < N; v2++){
        if(G[v][v2] == false){
            continue;
        }else if(visited[v2] == true){
            continue;
        }else{
            dfs(v2);
        }
    }
}


int main(){
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        G[a[i]][b[i]] = true; G[b[i]][a[i]] = true;
    }

    int ans = 0;
    bool bridge = false;
    for(int i = 0; i < M; i++){
        G[a[i]][b[i]] = false; G[b[i]][a[i]] = false;
        for(int j = 0; j < N; j++){
            visited[j] = false;
        }

        dfs(0);

        bridge = false;
        for(int j = 0; j < N; j++){
            if(visited[j] == false){
                bridge = true;
            }
        }
        if(bridge == true){
            ans++;
        }

        G[a[i]][b[i]] = true; G[b[i]][a[i]] = true;
    }

    cout << ans << endl;


    return 0;
}