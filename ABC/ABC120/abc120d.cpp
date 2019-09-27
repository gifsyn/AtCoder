
#include <iostream>
#include <vector>

using namespace std;


struct UnionFind {
    vector<long long> par, rank, cnt; // par[i]:iの親の番号,rank[r]:rを根とする木の高さ,cnt[r]:rを根とする木の要素数

    UnionFind(long long N){ //全て根として初期化
        for(long long i = 0; i < N; i++){
            par.push_back(i);
        }
        rank.assign(N, 0);
        cnt.assign(N, 1);
    }

    long long root(long long x){ // xの根を返す
        if(par[x] == x){
            return x;
        }
        
        return par[x] = root(par[x]);
    }

    void unite(long long x, long long y){ // xの木とyの木を併合
        long long rx = root(x); 
        long long ry = root(y);
        if(rx == ry){
            return;
        }
        
        if(rank[rx] < rank[ry]){
            par[rx] = ry;
            cnt[ry] += cnt[rx]; 
        }else{
            par[ry] = rx;
            cnt[rx] += cnt[ry];
            if(rank[x] == rank[y]){
                rank[rx] ++;
            }
        }
    }

    long long tsize(long long x){ //　xの木の要素数を返す
        long long rx = root(x);

        return cnt[rx];
    }

    bool same(long long x, long long y){ // xとyが同一の木に存在するかを返す
        long long rx = root(x);
        long long ry = root(y);

        return rx == ry;
    }
};


int main(){
    long long N, M;
    cin >> N >> M;
    vector<long long> a(M), b(M);
    for(long long i = 0; i < M; i++){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }

    UnionFind tree(N);
    vector<long long> ans(M);
    ans[M-1] = (N*(N-1))/2;
    for (long long i = M-1; i >= 1; i--){
        long long as = tree.tsize(a[i]), bs = tree.tsize(b[i]);
        bool isCom = tree.same(a[i],b[i]);
        tree.unite(a[i],b[i]);
        long long us = tree.tsize(a[i]);
        ans[i-1] = ans[i] - (isCom ? 0 : (us*(us-1)-as*(as-1)-bs*(bs-1))/2);
    }

    for(long long i = 0; i < M; i++){
        cout << ans[i] << endl;
    }


    return 0;
}