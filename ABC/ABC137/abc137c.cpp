
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s(N);
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }

    vector< vector<int> > cnt(N, vector<int>(26, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 10; j++){
            cnt[i][s[i][j]-'a']++;
        }
    }

    long long ans = 0;
    long long count;
    for(int i = 0; i < N; i++){
        count = 0;
        for(int j = i+1; j < cnt.size(); j++){
            if(cnt[i] == cnt[j]){
                cnt.erase(cnt.begin()+j);
                count++;
                j--;
            }
        }
        ans += count*(count+1)/2;
    }

    cout << ans << endl;
    

    return 0;
}