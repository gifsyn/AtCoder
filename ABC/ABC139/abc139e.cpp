
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector< queue<int> > A(N+1);
    int a;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < N-1; j++){
            cin >> a;
            A[i].push(a);
        }
    }

    int ans = 0;
    int res;
    bool F, H;
    while(true){
        F = false;
        for(int i = 1; i <= N; i++){
            if(!A[i].empty()){
                F = true;
            }
        }
        if(F == false){
            break;
        }

        res = 0;
        vector<bool> C(N+1, true);
        for(int i = 1; i <= N; i++){
            if(C[i] == true && C[A[i].front()] == true && A[A[i].front()].front() == i){
                C[i] = false;
                C[A[i].front()] = false;
                cout << i << " " << A[i].front() << " ";
                A[i].pop();
                A[A[i].front()].pop();
                res++;
            }
        }
        cout << endl;
        for(int i = 1; i <= N; i++){
                    cout << (C[i] ? 'o' : 'x') << " ";
        }
        cout << endl;
        if(res == 0){
            H = false;
            break;
        }
        ans++;
    }

    if(H == false){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }




    return 0;
}