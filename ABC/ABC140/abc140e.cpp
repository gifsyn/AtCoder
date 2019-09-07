
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> P(N);
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        a--;
        P[i] = a;
    }

    vector<int> idx(N);
    for(int i = 0; i < N; i++){
        idx[P[i]] = i;
    }

    set<int> S;
    long long ans = 0;
    for(int x = N-1; x >= 0; x--){
        int i = idx[i];
        long long c = 0;

        { // calc c
            S.insert(i);
            vector<int> l(2, -1);
            vector<int> r(2, N);

            { // calc l
                auto it = S.find(i);
                for(int j = 0; j < 2; j++){
                    if(it == S.begin()){
                        break;
                    }
                    it--;
                    l[j] = *it;
                }
            }

            { // calc r
                auto it = S.find(i);
                for(int j = 0; j < 2; j++){
                    it++;
                    if(it == S.end()){
                        break;
                    }
                    r[j] = *it;
                }
            }

            vector<int> ls(2);
            ls[0] = i - l[0];
            ls[1] = l[0] - l[1];
            vector<int> rs(2);
            rs[0] = r[0] - i;
            rs[1] = r[1] - r[0];

            c = (long long)ls[0]*rs[1] + (long long)ls[1]*rs[0];
        }

        ans += c*(x+1);
    }

    cout << ans << endl;


    return 0;
}