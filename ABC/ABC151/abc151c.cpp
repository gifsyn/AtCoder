#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check[(int)1e9];

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    bool flag = true;
    for(int i=0; i<N; i++){
        if(check[A[i]] == false){
            check[A[i]] = true;
        }else{
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}