
#include <iostream>

using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    for(x = 0; x <= N; x++){
        for(y = 0; y <= N; y++){
            z = N - x - y;
            if(z >= 0 && Y == 10000 * x + 5000 * y + 1000 * z){
                cout << x << " " << y << " " << z << endl;

                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;


    return 0;
}