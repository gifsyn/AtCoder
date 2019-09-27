
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    long long ans = __LONG_LONG_MAX__;
    long long v;
    for(long long X = -100; X <= 100; X++){
        v = 0;
        for(int i = 0;i < N; i++){
            v += (a[i]-X) * (a[i] - X);
        }
        ans = min(ans, v);
    }


    cout << ans << endl;


    return 0;
}