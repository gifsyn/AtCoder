
#include <cstdio>
#include <utility>
#include <algorithm>

using namespace std;

#define n_MAX (int)(2*10e5)
pair<long long, long long> J[n_MAX];

int main(){
    int N;
    scanf("%d", &N);
    long long a, b;
    for(int i = 0; i < N; i++){
        scanf("%lld %lld", &a, &b);
        J[i] = make_pair(b, a);
    }

    sort(J, J+N);

    long long A_sum[N];
    A_sum[0] = J[0].second;
    for(int i = 1; i < N; i++){
        A_sum[i] = J[i].second + A_sum[i-1];
    }

    bool f = true;
    for(int i = 0; i < N; i++){
        if(A_sum[i] > J[i].first){
            f = false;
            break;
        }
    }

    if(f){
        printf("Yes\n");
    }else{
        printf("No\n");
    }


    return 0;
}