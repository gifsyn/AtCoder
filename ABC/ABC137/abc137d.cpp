
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    pair<int, int> J[N];
    int a,b;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        J[i] = make_pair(b, a);
    }

    // cout << endl;
    sort(J, J+N);
    // for(int i = 0; i < N; i++){
    //     cout << J[i].first << " " << J[i].second << endl;
    // }

    long long ans = 0;
    int cnt = 0;
    for(int i = N-1; i >= 0; i--){
        if(J[i].second + cnt <= M){
            ans += J[i].first;
            // cout << cnt << " day:" << "reward " << J[i].first << " at "<< cnt+J[i].second << " day" << endl;
            cnt++;
        }
        if(cnt > M){
            break;
        }
    }
    
    cout << ans << endl;
    

    return 0;
}