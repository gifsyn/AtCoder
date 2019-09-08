
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long N, T;
    cin >> N >> T;
    vector<long long> t(N);
    for(int i = 0; i < N; i++){
        cin >> t[i];
    }

    long long X = 0;
    for(int i = 1; i < N; i++){
        if(t[i] - t[i-1] <= T){
            X = X + t[i] - t[i-1];
        }else{
            X = X + T;
        }
    }
    X += T;

    cout << X << endl;


    return 0;
}