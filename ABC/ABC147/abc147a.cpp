#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int sum = 0;
    int a;
    for(int i = 0;  i < 3; i++){
        cin >> a;
        sum += a;
    }
    if(sum >= 22){
        cout << "bust" << endl;
    }else{
        cout << "win" << endl;
    }

  return 0;
}