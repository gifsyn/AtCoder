
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
    // cout << "G = " << G << endl;

    long long P[G+1];
    for(long long i = 0; i <= G; i++){
        P[i] = 1;
    }
    for(long long i = 2; i <= sqrt(G); i++){
        if(P[i]){
            for(long long j = 0; i * (j + 2) <= G; j++){
                P[i*(j+2)] = 0;
            }
        }
    }
    // for(long long i = 2; i < G; i++){
	// 	if(P[i]){
	// 		cout << i << endl;
	// 	}
	// }

    long long ans = 0;
    for(long long i = 2; i <= G; i++){
        if(P[i] != 0 && G % i == 0){
            G = G / i;
            while(G % i == 0){
                G /= i;
            }
            ans++;
        }
        // cout << "i = " << i << endl;
        // cout << "G = " << G << endl;
    }


    cout << ans+1 << endl;


    return 0;
}