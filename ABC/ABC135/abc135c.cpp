
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1], b[n];
    for(int i = 0; i < n+1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    long long ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i]){
            ans += b[i];
        }else if(a[i] + a[i+1] >= b[i]){
            ans += b[i];
            a[i+1] = a[i+1] - (b[i] - a[i]);
        }else{
            ans = ans + a[i] + a[i+1];
            a[i+1] = 0;
        }
    }

    cout << ans << endl;

    return 0;
}