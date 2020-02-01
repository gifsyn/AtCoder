
#include <iostream>

using namespace std;

int d(long long int a){
    int i = 0LL;
    while(a != 0LL){
        a /= 10LL;
        i++;
    }
    return i;
}

int main(){
    long long int A, B, X;
    cin >> A >> B >> X;
    long long int R = (long long int)1e9+1LL;
    long long int L = 0LL;
    long long int M;
    while(R-L > 1LL){
        M = (R+L)/2LL;
        if(A*M + B*(long long int)d(M) > X){
            R = M;
        }else{ // A*M + B*d(M) <= X
            L = M;
        }
    }

    cout << L << endl;

    return 0;
}