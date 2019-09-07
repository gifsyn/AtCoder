
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> s(N);
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }

    // int ans = 0;
    // int p;
    // for(int bit = 0; bit < (1<<N); bit++){
    //     p = 0;
    //     for(int i = 0; i < N; i++){
    //         if(bit & (1<<i)){
    //             p += s[i];
    //         }
    //     }
    //     if(p % 10 != 0){
    //         ans = max(ans, p);
    //     }
    // }


    sort(s.begin(), s.end());

    int ans = 0;
    for(int i = 0; i < N; i++){
        ans += s[i];
    }

    if(ans % 10 == 0){
        for(int i = 0; i < N; i++){
            if(s[i] % 10 != 0){
                ans -= s[i];
                break;
            }
        }
    }
    
    if(ans % 10 != 0){
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }


    return 0;
}