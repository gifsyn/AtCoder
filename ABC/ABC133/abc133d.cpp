
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; ++i){
        cin >> A[i];
        A[i] *= 2;
    }


    long long b = 0;
    for (int i = 0; i < N; ++i){
        b = A[i] - b;
    }
    long long x = b / 2;


    long long R = x;
    for (int i = 0; i < N; ++i) {
        cout << R << " ";
        R = A[i] - R;
    }
    cout << endl;

    return 0;
}