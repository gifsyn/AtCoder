
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> D(K);
    for(int i = 0; i < K; i++){
        cin >> D[i];
    }

    int ans = N;
    string S;
    bool F;
    while(true){
        S = to_string(ans);
        F = true;
        for(int i = 0; i < K; i++){
            if(count(S.begin(), S.end(), D[i]+'0')){
                F = false;
                ans++;
                break;
            }
        }

        if(F == true){
            break;
        }
    }

    cout << ans << endl;


    return 0;
}