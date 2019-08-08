
#include <iostream>
#include <algorithm>

using namespace std;

long long L, R;

int main(){
    cin >> L >> R;

    int ans = 2019;
    for(long long i = L; i < R; i++){
        for(long long j = i + 1; j <= R; j++){
            ans = min(((i % 2019) * (j % 2019)) % 2019, (long long)ans);
            if(ans == 0){
                break;
            }
        }
        if(ans == 0){
            break;
        }
    }

    cout << ans << endl;


    return 0;
}