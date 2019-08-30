
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }

    long long ans = 0;
    map<string, bool> M;
    vector<long long> C(5, 0);
    for(int i = 0; i < N; i++){
        if(S[i][0] == 'M' || S[i][0] == 'A' || S[i][0] == 'R' || S[i][0] == 'C' || S[i][0] == 'H'){
            if(M[S[i]] == false){
                M[S[i]] = true;

                if(S[i][0] == 'M'){
                    C[0]++;
                }else if(S[i][0] == 'A'){
                    C[1]++;
                }else if(S[i][0] == 'R'){
                    C[2]++;
                }else if(S[i][0] == 'C'){
                    C[3]++;
                }else if(S[i][0] == 'H'){
                    C[4]++;
                }
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            for(int k = j+1; k < 5; k++){
                if(C[i] != 0 && C[j] != 0 && C[k] != 0){
                    ans += C[i] * C[j] * C[k];
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}