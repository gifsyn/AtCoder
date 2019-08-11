
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int N, A, B, C;
vector<int> L;


int rec(int i, int a, int b, int c){
    if(i == N){
        if(a == 0 || b == 0 || c == 0){
            return 1e9;
        }else{
            return abs(a - A) + abs(b - B) + abs(c - C);
        }
    }

    int res;
    res = min({ rec(i+1, a, b, c),
                rec(i+1, a + L[i], b, c) + (a ? 10 : 0),
                rec(i+1, a, b + L[i], c) + (b ? 10 : 0),
                rec(i+1, a, b, c + L[i]) + (c ? 10 : 0)
                });
    
    return res;
}


int main() {
    cin >> N >> A >> B >> C;
    L.resize(N);
    for (int i = 0; i< N; ++i){
        cin >> L[i];
    }
    
    cout << rec(0, 0, 0, 0) << endl;


    return 0;
}