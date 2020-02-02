#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    vector< vector<int> > g(N, vector<int>(N, -1));
    // g[i][j] := i人目の証言におけるj人目の真偽
    int a;
    int x, y;
    for(int i = 0; i < N; i++){
        cin >> a;
        for(int j = 0; j < a; j++){
            cin >> x >> y;
            g[i][x-1] = y;
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1<<N); bit++){
        vector<int> d(N, 0);
        // bitをvectorに変換 d[i] := i人目が親切かどうか
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)){
                d[i] = 1;
            }
        }

        bool flag = true; // 矛盾が起きているかどうか
        for(int i = 0; i < N; i++){
            if(d[i] == 1){
                for(int j = 0; j < N; j++){
                    if(g[i][j] == -1){
                        continue;
                    }
                    if(g[i][j] != d[j]){
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag == true){
            ans = max(ans, __builtin_popcount(bit));
        }
    }

    cout << ans << endl;

  return 0;
}