
#include <iostream>

using namespace std;

int main(){
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }


    bool F = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(c[i][0] - c[0][0] != c[i][j] - c[0][j]){
                F = false;
                break;
            }
        }
    }

    if(F == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}