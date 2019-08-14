
#include <iostream>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    char C[H][W+1];
    for(int i = 0; i < H; i++){
        cin >> C[i];
    }

    for(int i = 0; i < H; i++){
        cout << C[i] << endl;
        cout << C[i] << endl;
    }


    return 0;
}