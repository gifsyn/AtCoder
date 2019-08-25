
#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<int, int> e, o;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        if(i % 2 == 0){
            e[x]++;
        }else{
            o[x]++;
        }
    }

    vector< pair<int, int> > E(2), O(2);
    for(auto p:e){
       E.push_back(make_pair(p.second,p.first));
    }
    for(auto p:o){
       O.push_back(make_pair(p.second,p.first));
    }
    sort(E.begin(), E.end(), greater<pair<int, int>>());
    sort(O.begin(), O.end(), greater<pair<int, int>>());

    int ans;
    if(E[0].second != O[0].second){
        ans = N - (E[0].first + O[0].first);
    }else{
        ans = N - max(E[0].first+O[1].first, E[1].first+O[0].first);
    }

    cout << ans << endl;


    return 0;
}