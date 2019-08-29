
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector< pair<int, int> > R(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> R[i].second >> R[i].first;
    }
    for(int i = 0; i < N; i++){
        cin >> B[i].first >> B[i].second;
    }

    sort(R.begin(), R.end());
    sort(B.begin(), B.end());
    reverse(R.begin(), R.end());


    int ans = 0;
    map<int, bool> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(M[j] == true){
                continue;
            }
            if(R[j].first < B[i].second && R[j].second < B[i].first){
                ans++;
                M[j] = true;
                break;
            }
        }
    }

    cout << ans << endl;


    return 0;
}