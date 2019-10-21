
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> d(N);
    for(int i = 0; i < N; i++){
        cin >> d[i];
    }

    long long ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;

    return 0;
}