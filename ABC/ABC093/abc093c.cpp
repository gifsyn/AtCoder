
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> X(3);
    cin >> X[0] >> X[1] >> X[2];
    sort(X.begin(), X.end());

    int ans = 0;
    if((X[2] - X[1]) % 2 == 0 && (X[2] - X[0]) % 2 == 0){
        ans = (X[2] - X[1])/2 + (X[2] - X[0])/2;
    }else if((X[2] - X[1]) % 2 == 0 && (X[2] - X[0]) % 2 == 1){
        ans = (X[2] - X[1])/2 + (X[2] - X[0] - 1)/2 + 2;
    }else if((X[2] - X[1]) % 2 == 1 && (X[2] - X[0]) % 2 == 0){
        ans = (X[2] - X[1] - 1)/2 + (X[2] - X[0])/2 + 2;
    }else{
        ans = (X[2] - X[1] - 1)/2 + (X[2] - X[0] - 1)/2 + 1;
    }

    cout << ans << endl;


    return 0;
}