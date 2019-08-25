
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int x[N], y[N], h[N];
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i] >> h[i];
    }

    int Cx, Cy, H;
    bool F;
    for(Cx = 0; Cx <= 100; Cx++){
        for(Cy = 0; Cy <= 100; Cy++){
            for(int i = 0; i < N; i++){
                if(h[i] > 0){
                    H = abs(x[i]-Cx) + abs(y[i]-Cy) + h[i];
                    break;
                }
            }

            F = true;
            for(int i = 0; i < N; i++){
                if(max(H-abs(x[i]-Cx)-abs(y[i]-Cy), 0) != h[i]){
                    F = false;
                    break;
                }
            }

            if(F == true){
                break;
            }
        }
        if(F == true){
            break;
        }
    }

    cout << Cx << " " << Cy << " " << H << endl;


    return 0;
}