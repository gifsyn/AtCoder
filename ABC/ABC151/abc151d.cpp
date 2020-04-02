#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// (x, y) を始点とした BFS をして、(x, y) から最も遠いマスへの距離を答える
int bfs(vector<string> &S, int i, int j){
    int H = S.size();
    int W = S[0].size();
    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int,int>> que;

    int res = 0;
    que.push({i, j});
    dist[i][j] = 0;
    
    while(que.empty() != true){
        int x = que.front().first;
        int y = que.front().second;
        res = max(res, dist[x][y]);
        que.pop();

        for(int dir=0; dir<4; dir++){
            int nx = x+dx[dir];
            int ny = y+dy[dir];
            
            if(0<=nx && nx<H && 0<=ny && ny<W){
                if(S[nx][ny] == '#'){
                    continue;
                }
                if(dist[nx][ny] == -1){
                    dist[nx][ny] = dist[x][y] + 1;
                    que.push({nx, ny});
                }
            }
        }
    }

    return res;
}


int main(){
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i=0; i<H; i++){
        cin >> S[i];
    }

    int ans = 0;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(S[i][j] == '#'){
                continue;
            }else{
                ans = max(ans, bfs(S, i, j));
            }
        }
    }
    cout << ans << endl;

    return 0;
}