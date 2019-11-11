
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool f = false;
    for(int i = 1; i <= 9; i++){
        for(int j = i; j <= 9; j++){
            if(i * j == n){
                f = true;
                break;
            }
        }
    }

    if(f == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}