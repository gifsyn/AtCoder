
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long X;
    cin >> X;

    long long ans = 0;;
    long long p = 0;
    for(long long i = 1; ; i++){
        p += i;
        ans++;
        if(p >= X){
            break;
        }
    }

    cout << ans << endl;


    return 0;
}