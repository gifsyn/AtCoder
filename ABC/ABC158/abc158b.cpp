#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    ll A, B;
    cin >> A >> B;

    ll cnt_AB = N/(A+B);
    ll cnt_C = N-cnt_AB*(A+B);
    ll cnt_B = cnt_AB*A + (cnt_C<A ? cnt_C : A);

    cout << cnt_B << endl;

    return 0;
}