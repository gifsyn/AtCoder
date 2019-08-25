
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int D, G;
    cin >> D >> G;
    vector<int> p(D), c(D), all(D);
    for(int i = 0; i < D; i++){
        cin >> p[i] >> c[i];
        all[i] = 100*(i+1)*p[i]+c[i];
    }

    long long ans = 1e9;
    for(int bit = 0; bit < (1 << D); bit++){
        long long s = 0, cnt = 0;
        for(int i = 0; i < D; i++){
            if(bit & (1 << i)){ // 100*i点のPi問を全て解く
                s += all[i];
                cnt += p[i];
            }
        }

        if(s >= G){
            ans = min(ans, cnt);
            continue;
        }else{
            int j;
            for(int i = D-1; i >= 0; i--){
                if(!(bit & (1 << i))){ // j := 解いてない問題の中で最も高い点を得られる i
                    j = i;
                    break;
                }
            }

            if(s+100*(j+1)*(p[j]-1)<G){
                continue;
            }else{
                cnt += (G-s)/(100*(j+1))+((G-s)%(100*(j+1)) != 0);
            }

            ans = min(ans, cnt);
        }
    }

    cout << ans << endl;


    return 0;
}