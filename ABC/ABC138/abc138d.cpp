
#include <iostream>

using namespace std;

int N;
int Q;
int a[(int)1e6];
int b[(int)1e6];
int p[(int)1e6];
int x[(int)1e6];
long long cnt[(int)1e6];


void dfs(int p, int x){
    cnt[p] += x;
    for(int i = 0; i < N-1; i++){
        if(a[i] == p){
            dfs(b[i], x);
        }
    }

    return ;
}


int main(){
    cin >> N >> Q;
    for(int i = 0; i < N-1; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < Q; i++){
        cin >> p[i] >> x[i];
    }


    for(int i = 0; i < Q; i++){
        dfs(p[i], x[i]);
    }

    for(int i = 1; i <= N; i++){
        if(i != N){
            cout << cnt[i] << " ";
        }else{
            cout << cnt[i] << endl;
        }
    }

    return 0;
}