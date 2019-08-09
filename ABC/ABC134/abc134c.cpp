
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n);

    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(a[i] != b[j]){
                cout << b[j] << endl;
                break;
            }else{
                cout << b[j-1] << endl;
                break;
            }
        }
    }


    return 0;
}