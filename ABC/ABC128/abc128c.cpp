
#include <cstdio>
#include <iostream>

using namespace std;

int N, M;
#define N_MAX 10
#define M_MAX 10
int k[N_MAX];
int s[M_MAX][N_MAX];
int p[M_MAX];

int main(){
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> k[i];
        for(int j = 0; j < k[i]; j++){
            cin >> s[i][j];
        }
    }
    for(int i = 0; i < M; i++){
        cin >> p[i];
    }

    return 0;
}