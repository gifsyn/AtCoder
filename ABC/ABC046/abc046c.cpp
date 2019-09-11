
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> T(N), A(N);
    for(int i = 0; i < N; i++){
        cin >> T[i] >> A[i];
    }

    long long r = T[0], s = A[0];
    long long c;
    for(int i = 1; i < N; i++){
        c = max(r/T[i]+min(1LL, r%T[i]), s/A[i]+min(1LL, s%A[i]));
        r = c * T[i];
        s = c * A[i];
    }

    cout << r+s << endl;


    return 0;
}