
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int A, B, Q;
    cin >> A >> B >> Q;
    vector<long long> s(A), t(B), x(Q);
    for(int i = 0; i < A; i++){
        cin >> s[i];
    }
    for(int i = 0; i < B; i++){
        cin >> t[i];
    }
    for(int i = 0; i < Q; i++){
        cin >> x[i];
    }

    s.push_back(LLONG_MIN);
    s.push_back(LLONG_MAX);
    t.push_back(LLONG_MIN);
    t.push_back(LLONG_MAX);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // for(int i = 0; i < s.size(); i++){
    //     cout << s[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < t.size(); i++){
    //     cout << t[i] << " ";
    // }
    // cout << endl;

    long long ans;
    for(int i = 0; i < Q; i++){
        ans = LLONG_MAX;
        auto it_sr = lower_bound(s.begin(), s.end(), x[i]);
        auto it_tr = lower_bound(t.begin(), t.end(), x[i]);
        auto it_sl = it_sr-1;
        auto it_tl = it_tr-1;
        cout << *it_sr << " " << *it_sl << " " << *it_tr << " " << *it_tl << endl;
        
        ans = min(
            {   ans,
                abs(x[i]-*it_sr) + abs(*it_sr-*it_tr),
                abs(x[i]-*it_sr) + abs(*it_sr-*it_tl),
                abs(x[i]-*it_sl) + abs(*it_sl-*it_tr),
                abs(x[i]-*it_sl) + abs(*it_sl-*it_tl),
                abs(x[i]-*it_tr) + abs(*it_tr-*it_sr),
                abs(x[i]-*it_tr) + abs(*it_tr-*it_sl),
                abs(x[i]-*it_tl) + abs(*it_tl-*it_sr),
                abs(x[i]-*it_tl) + abs(*it_tl-*it_sl)
            }
        );

        cout << ans << endl;
    }


    return 0;
}