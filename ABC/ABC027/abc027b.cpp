
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    int m = 0;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        m += a[i];
    }
    if(m % N == 0){
        m /= N;
    }else{
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    int b = 0;
    for(int i = 0; i < N-1; i++){
        b += a[i];
        if(b != m*(i+1)){
            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}