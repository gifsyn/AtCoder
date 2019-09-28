
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b){
  while(true){
    if(a < b){
        swap(a, b);
    }
    if(!b){
        break;
    }
    a %= b;
  }

  return a;
}


int main(){
    long long A, B;
    cin >> A >> B;


    long long G = gcd(A, B);
    long long H = sqrt(G);

    long long ans = 0;
    for(long long i = 2; i <= H+1; i++){
        if(G % i == 0){
            G = G / i;
            while(G % i == 0){
                G /= i;
            }
            ans++;
            
            if(G == 1){
                break;
            }
            
            // cout << "i = " << i << endl;
            // cout << "G = " << G << endl;
        }
    }



    cout << ans+(G == 1LL ? 1LL : 2LL) << endl;


    return 0;
}