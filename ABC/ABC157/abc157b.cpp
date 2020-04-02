#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    vector<vector<int>> A(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    vector<int> b(N);
    for(int i=0; i<N; i++){
        cin >> b[i];
    }

    vector< vector<bool> > C(3, vector<bool>(3, false));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<N; k++){
                if(A[i][j] == b[k]){
                    C[i][j] = true;
                }
            }
        }
    }

    for(int i=0; i<3; i++){
        if(C[i][0] && C[i][1] && C[i][2]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    for(int i=0; i<3; i++){
        if(C[0][i] && C[1][i] && C[2][i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(C[0][0] && C[1][1] && C[2][2]){
        cout << "Yes" << endl;
        return 0;
    }
    if(C[2][0] && C[1][1] && C[0][2]){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;


    return 0;
}