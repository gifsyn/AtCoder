
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    vector< vector<int> > cnt(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        vector<int> done(W, 0);
        for(int j = 0; j < W; j++){
            if(S[i][j] == '#'){
                continue;
            }
            if(done[j] != 0){
                continue;
            }

            int l = 0;
            while(j + l < W){
                if(S[i][j+l] == '#'){
                    break;
                }
                l++;
            }
            for(int k = 0; k < l; k++){
                cnt[i][j+k] += l;
                done[j+k] = 1;
            }
        }
    }


    for(int j = 0; j < W; j++){
        vector<int> done(H, 0);
        for(int i = 0; i < H; i++){
            if(S[i][j] == '#'){
                continue;
            }
            if(done[i] != 0){
                continue;
            }

            int l = 0;
            while(i + l < H){
                if(S[i+l][j] == '#'){
                    break;
                }
                l++;
            }
            for(int k = 0; k < l; k++){
                cnt[i+k][j] += l;
                done[i+k] = 1;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            ans = max(ans, cnt[i][j]-1);
        }
    }
    cout << ans << endl;


    return 0;
}