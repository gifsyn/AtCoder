#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int H, A;
    cin >> H >> A;
    cout << H/A+(H%A==0 ? 0 : 1) << endl;

    return 0;
}