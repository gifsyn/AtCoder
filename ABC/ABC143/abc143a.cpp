
#include <iostream>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int ans = A - B * 2;
    if(ans >= 0){
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}