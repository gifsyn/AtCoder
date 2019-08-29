
#include <iostream>

using namespace std;

int main(){
    unsigned long long N, M;
    cin >> N >> M;
    if(N > M){
        swap(N, M);
    }

    unsigned long long ans = 0;
    if(N == 1 && M == 1){
        ans = 1;
    }else if(N == 1 && M > 1){
        ans = M-2;
    }else{
        ans = (N-2)*(M-2);
    }

    cout << ans << endl;


    return 0;
}