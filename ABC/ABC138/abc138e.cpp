
#include <iostream>
#include <string>
#include <map>

using namespace std;

string s, t;
map<char, int> M_s;
map<char, int> M_t;

void generate_map(){
    for(int i = 0; i < s.size(); i++){
        M_s.insert(make_pair(s[i], i+1));
    }
    for(int i = 0; i < t.size(); i++){
        M_t.insert(make_pair(t[i], i+1));
    }
}

int main(){
    cin >> s;
    cin >> t;

    generate_map();

    long long s_len = s.size();
    long long t_len = t.size();
    long long ans = 0;
    for(int i = 0; i < t_len; i++){
        if(M_s.count(t[i]) == 0){
            cout << -1 << endl;

            return 0;
        }else{
            if(i != t_len-1){
                if(i+1 < t_len && M_s.count(t[i+1]) != 0 && M_s[t[i]] < M_s[t[i+1]]){
                    continue;
                }
                ans += s_len;
            }else{
                ans += (long long)M_s[t[i]];
            }
        }
    }

    cout << ans << endl;


    return 0;
}