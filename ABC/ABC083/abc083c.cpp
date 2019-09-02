
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long X, Y;
    cin >> X >> Y;
    unsigned long long ans = 0;
    unsigned long long i = 0;
    while(true){
        if(X * (unsigned long long)pow((unsigned long long)2, i) <= Y){
            ans++;
            i++;
        }else{
            break;
        }
    }

    cout << ans << endl;


    return 0;
}