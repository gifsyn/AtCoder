
#include <iostream>
#include <algorithm>
#include <tuple>
#include <utility>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    tuple<int, int, int> data[M];
    for (int i = 0; i < M; ++i) {
        int p, y;
        cin >> p >> y;
        data[i] = make_tuple(y, p, i);
    }

    sort(data, data + M);

    int cnt[N+1];
    for(int i = 0; i < N+1; i++){
        cnt[i] = 0;
    }

    pair<int, int> id[M];
    for (int i = 0; i < M; ++i) {
        int y, p, idx;
        tie(y, p, idx) = data[i];
        cnt[p]++;
        id[idx] = make_pair(p, cnt[p]);
    }

    for (int i = 0; i < M; ++i) {
        printf("%06d%06d\n", id[i].first, id[i].second);
    }


    return 0;
}