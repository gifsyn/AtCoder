
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long x;
    cin >> x;
    vector<long long> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    long long ans = 0;
    long long v;
    for(int i = 1; i < N; i++){
        if(a[i-1] + a[i] > x){
            v = (a[i-1] + a[i]) - x;
            ans += v;
            if(a[i] >= v){
                a[i] -= v;
            }else{
                a[i-1] -= (v - a[i]);
                a[i] = 0;
            }
        }
    }

    cout << ans << endl;


    return 0;
}