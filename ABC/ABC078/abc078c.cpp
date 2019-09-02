
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;

    cout << (1900*M+100*(N-M))*pow(2, M) << endl;


    return 0;
}