
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    int m = h[0];
    bool f = true;
    for(int i = 0; i < n; i++){
        if(h[i] >= m){
            m = h[i];
        }else if(m - h[i] > 1){
            f = false;
            break;
        }
    }

    if(f){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}