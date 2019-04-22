
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    vector< pair<int, int> > pairs;
    int A, B;
    for(int i = 0; i < N; i++){
        scanf("%d %d", &A, &B);
        pairs.push_back(make_pair(A, B));
    }

    sort(pairs.begin(), pairs.end());

    long long int ans = 0;
    int count;
    for(int i = 0; i < N; i++){
        count = min(M, pairs[i].second);
        ans += (long long int)pairs[i].first * count;
        M -= count;
        if(M == 0){
            break;
        }
    }
    printf("%lld\n", ans);

    return 0;
}