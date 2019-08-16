
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> V(N);
    for (int i = 0; i < N; ++i){
        cin >> V[i];
    }

    long long ans = 0;
    for(int p = 0; p <= min(K, N); p++){
        for(int q = 0; p + q <= min(K, N); q++){
            vector<long long> w;
            long long a = 0;
            for(int i = 0; i < p; i++){
                w.push_back(V[i]);
                a += V[i];
            }
            for(int i = 0; i < q; i++){
                w.push_back(V[N-1-i]);
                a += V[N-1-i];
            }

            sort(w.begin(), w.end());

            for(int i = 0; i < min(K-p-q, (int)w.size()); i++){
                if(w[i] < 0){
                    a -= w[i];
                }
            }
            ans = max(ans, a);
        }
    }

    cout << ans << endl;


    return 0;
}