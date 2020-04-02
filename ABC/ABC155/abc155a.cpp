#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> cnt(10, 0);
    cnt[A]++;
    cnt[B]++;
    cnt[C]++;

    for(auto i : cnt){
        if(i == 2){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}