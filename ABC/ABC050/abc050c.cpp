
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

const int MOD = 1e9+7;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    map<int, int> M;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        M[A[i]]++;
    }

    int ans = 0;
    bool F = true;
    if(N % 2 == 1){
        if(M[0] == 1){
            for(auto p : M){
                if(p.first != 0 && p.second != 2){
                    F = false;
                    break;
                }
            }
        }else{
            F = false;
        }
    }else{
        for(auto p : M){
            if(p.second != 2){
                F = false;
                break;
            }
        }
    }

    if(F == true){
        ans = 1;
        for(int i = 1; i <= N/2; i++){
            ans *= 2;
            ans %= MOD;
        }
        cout << ans << endl;
    }else{
        cout << ans << endl;
    }


    return 0;
}