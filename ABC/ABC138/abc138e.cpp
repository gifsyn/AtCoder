
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int len_s = s.size();
    int len_t = t.size();
    vector< vector<int> > is(26);
    for(int i = 0; i < len_s; i++){
        is[s[i]-'a'].push_back(i);
    }
    for(int i = 0; i < len_s; i++){
        is[s[i]-'a'].push_back(i+len_s);
    }

    long long ans = 0;
    int p = 0;
    for(int i = 0; i < len_t; i++){
        int c = t[i]-'a';
        if(is[c].size() == 0){
            cout << -1 << endl;

            return 0;
        }

        p = *lower_bound(is[c].begin(), is[c].end(), p) + 1;
        if(p >= len_s){
            p -= len_s;
            ans += len_s;
        }
    }
    ans += p;

    cout << ans << endl;


    return 0;
}