
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int d = 0;
    int a = n;
    while(a != 0){
        d++;
        a /= 10;
    }


    int ans = 0;
    for(int i = 0; i < d; i++){
        if(i % 2 == 0 && i != d - 1){
            ans += pow(10, i + 1) - pow(10, i);
        }else if(i % 2 == 0 && i == d - 1){
            ans += n - pow(10, i) + 1;
        }
    }

    cout << ans << endl;
    
    return 0;
}