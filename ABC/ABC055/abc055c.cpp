
#include <iostream>

using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    long long ans = 0;
    
    ans += min(N, M/2);
    N -= ans;
    M -= 2*ans;
    ans += M/4;

    cout << ans << endl;


    return 0;
}