
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long H, W;
    cin >> H >> W;

    vector<long long> s(3);
    long long ans = __INT_MAX__;
    for(long long i = 1; i < W; i++){
        s[0] = H * i;
        s[1] = (W-i) * (H/2);
        s[2] = (W-i) * ((H+1)/2);
        sort(s.begin(), s.end());
        ans = min(ans, s[2]-s[0]);
    }
    for(long long i = 1; i < H; i++){
        s[0] = W * i;
        s[1] = (H-i) * (W/2);
        s[2] = (H-i) * ((W+1)/2);
        sort(s.begin(), s.end());
        ans = min(ans, s[2]-s[0]);
    }
    
    ans = min(ans, H*(W/3 + min(W%3, 1LL)) - H*(W/3));
    ans = min(ans, W*(H/3 + min(H%3, 1LL)) - W*(H/3));

    cout << ans << endl;


    return 0;
}