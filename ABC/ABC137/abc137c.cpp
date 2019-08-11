
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    
    map<string, int> M;
    for(int i = 0; i < n; i++){
        sort(s[i].begin(), s[i].end());
        M[s[i]]++;
    }

    long long ans = 0;
    for(auto P : M){
        ans += (long long)P.second * (P.second - 1) / 2;
    }

    cout << ans << endl;


    return 0;
}