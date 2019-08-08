
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    if(abs(a - b) % 2 == 1){
        cout << "IMPOSSIBLE" << endl;
    }else{
        cout << (a + b) / 2 << endl;
    }

    return 0;
}