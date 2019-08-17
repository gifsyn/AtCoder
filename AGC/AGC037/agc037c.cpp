
#include <iostream>

using namespace std;

long long ans = 0;
int N;
long long A[(int)1e6];
long long B[(int)1e6];

void dfs(){

}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    bool F = true;
    bool G = true; // G == false -> ans:-1
    bool H = false;
    long long ans = 0;
    while(true){
        for(int i = 0; i < N; i++){
            if(i == 0){
                if(B[0] > B[N-1] + B[1]){
                    B[0] -= ((B[0]/(B[N-1] + B[1]))*(B[N-1] + B[1]));
                    ans += (B[0]/(B[N-1] + B[1]));
                }
            }else if(i == N-1){
                if(B[N-1] > B[0] + B[N-2]){
                    B[N-1] -= ((B[N-1]/(B[0] + B[N-2]))*(B[0] + B[N-2]));
                    ans += (B[N-1]/(B[0] + B[N-2]));
                }
            }else if(B[i] > B[i-1] + B[i+1]){
                B[i] -= ((B[i]/(B[i-1] + B[i+1]))*(B[i-1] + B[i+1]));
                ans += (B[i]/(B[i-1] + B[i+1]));
            }
        }

        H = false;
        for(int i = 0; i < N; i++){
            if(i == 0){
                if(B[0] > B[N-1] + B[1]){
                    H = true;
                    break;
                }
            }else if(i == N-1){
                if(B[N-1] > B[0] + B[N-2]){
                    H = true;
                    break;
                }
            }else if(B[i] > B[i-1] + B[i+1]){
                H = true;
                break;
            }
        }
        if(H == true){
            continue;
        }

        F = true;
        for(int i = 0; i < N; i++){
            if(B[i] != A[i]){
                F = false;
                break;
            }
        }
        if(F == false){
            G = false;
            break;
        }

        break;
    }

    if(G == false){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }


    return 0;
}