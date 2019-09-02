
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int C[N-1], S[N-1], F[N-1];
    for(int i = 0; i < N-1; i++){
        cin >> C[i] >> S[i] >> F[i];
    }

    int t;
    for(int i = 0; i < N; i++){
        t = 0;
        for(int j = i; j < N-1; j++){
            if(t < S[j]){
                t = S[j];
            }else if(t % F[j] != 0){
                t = t + F[j] - t % F[j];
            }
            t = t + C[j];
        }
        cout << t << endl;
    }


    return 0;
}