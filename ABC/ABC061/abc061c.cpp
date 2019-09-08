
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    vector< pair<long long, long long> > v(N);
    long long a, b;
    for(long long i = 0; i < N; i++){
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    sort(v.begin(), v.end());

    long long ans;
    long long cnt = 0;
    for(long long i = 0; i < N; i++){
        cnt += v[i].second;
        if(cnt >= K){
            ans = v[i].first;
            break;
        }
    }
    cout << ans << endl;


    return 0;
}