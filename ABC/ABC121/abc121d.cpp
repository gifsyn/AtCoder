
#include <iostream>

using namespace std;


long long solve(long long x){
    if(x % 2 == 1){
        return ((x+1)/2 % 2);
    }else{
        return (((x+1+1)/2 % 2) ^ (x+1));
    }
}


int main(){
    long long A, B;
    cin >> A >> B;

    cout << (solve(B) ^ solve(A-1)) << endl;


    return 0;
}