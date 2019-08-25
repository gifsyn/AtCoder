
#include <iostream>

using namespace std;

int main(){
    int M, D;
    cin >> M >> D;

    long long ans = 0;
    bool F = true;
    for(int d_10 = 2; d_10 <= 9; d_10++){
        for(int d_1 = 2; d_1 <= 9; d_1++){
            if(d_10 * 10 + d_1 > D){
                F = false;
                break;
            }

            if(d_10 * d_1 <= M){
                // cout << d_10 << d_1 << endl;
                ans++;
            }
        }

        if(F = false){
            break;
        }
    }

    cout << ans << endl;


    return 0;
}