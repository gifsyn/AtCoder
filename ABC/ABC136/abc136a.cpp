
#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans = c - (a - b);
    if(ans < 0){
        cout << 0 << endl;
    }else{
        cout << ans << endl;
    }
    
    return 0;
}