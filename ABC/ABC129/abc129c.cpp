
#include <iostream>
#include <algorithm>

using namespace std;

const long long p = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;

    int a;
    bool s[n+1];
    for(int i = 0; i < n+1; i++){
        s[i] = true;
    }
    for(int i = 0; i < m; i++){
        cin >> a;
        s[a] = false;

    }



    long long ans[n+1];
    for(int i = 0; i < n+1; i++){
        ans[i] = 0;
    }
    ans[0] = 1;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= min(n, i + 2); j++){
            if(s[j]){
                ans[j] += ans[i];
                ans[j] %= p;
            }
        }
    }

    cout << ans[n] << endl;

    return 0;
}