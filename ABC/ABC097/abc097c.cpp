
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int K;
    cin >> K;
    vector<string> subs;
    for(int i = 0; i < K; i++){
        for(int j = 0; j < s.size()-i; j++){
            subs.push_back(s.substr(j, i+1));
        }
    }

    sort(subs.begin(), subs.end());
    subs.erase(unique(subs.begin(), subs.end()), subs.end());

    cout << subs[K-1] << endl;


    return 0;
}