#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;

    vector< vector<ll> > num(10, vector<ll>(10, 0));
    // num[p][q] := 最上位p,一の位qである1~Nの整数の個数
    for(int n=1; n<=N; n++){
        vector<int> d;
        int nn = n;
        while(nn != 0){
            d.push_back(nn % 10);
            nn /= 10;
        }

        int a = d[0]; // 一の位q (0も含む)
        int b = d[d.size()-1]; // 最上位p
        num[b][a]++;
    }

    ll ans = 0;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            ans += num[i][j] * num[j][i];
        }
    }

    cout << ans << endl;

    return 0;
}