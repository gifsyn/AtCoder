
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    string s;
    int d;
    int ans = 0;
    for(int i = 0; i < N; i++){
        cin >> s >> d;
        if(s == "East"){
            if(d < A){
                ans += A;
            }else if(A <= d && d <= B){
                ans += d;
            }else if(d > B){
                ans += B;
            }
        }else{
            if(d < A){
                ans -= A;
            }else if(A <= d && d <= B){
                ans -= d;
            }else if(d > B){
                ans -= B;
            }
        }
    }

    if(ans < 0){
        cout << "West " << -ans << endl;
    }else if(ans > 0){
        cout << "East " << ans << endl;
    }else{
        cout << ans << endl;
    }


    return 0;
}