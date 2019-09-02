
#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int ans = 0;
    int p = 1;
    while(true){
        if(p >= B){
            break;
        }else{
            if(p == 1){
                p = A;
                ans++;
            }else{
                p += (A-1);
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}