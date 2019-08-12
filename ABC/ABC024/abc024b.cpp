
#include <iostream>

using namespace std;

int main(){
    int N, T;
    cin >> N >> T;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int ans = 0;
    for(int i = 1; i < N; i++){
        if(T >= A[i]-A[i-1]){
            ans += A[i]-A[i-1];
        }else{
            ans += T;
        }
    }
    ans += T;

    cout << ans << endl;


    return 0;
}