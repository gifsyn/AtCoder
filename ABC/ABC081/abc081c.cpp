
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    map<int, int> cnt;
    for(int a : A){
        cnt[a]++;
    }

    vector<int> B;
    for(auto p : cnt){
        B.push_back(p.second);
    }

    sort(B.begin(), B.end());

    int ans = 0;
    if(B.size() <= K){
        ans = 0;
    }else{
        for(int i = 0; i < B.size()-K; i++){
            ans += B[i];
        }
    }

    cout << ans << endl;


    return 0;
}