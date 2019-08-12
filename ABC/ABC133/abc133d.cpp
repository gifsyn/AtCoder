
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int x = 0;
    for(int i = 0; i < N; i++){
        if(i % 2 == 1){
            x -= A[i];
        }else{
            x += A[i];
        }
    }
    x /= 2;

    int ans[N];
    ans[0] = x;
    for(int i = 0; i < N-1; i++){
        ans[i+1] = A[i] - ans[i];
    }
    for(int i = 0; i < N; i++){
        ans[i] *= 2;
    }

    for(int i = 0; i < N; i++){
        if(i != N-1){
            cout << ans[i] << " ";
        }else{
            cout << ans[i] << endl;
        }
    }


    return 0;
}