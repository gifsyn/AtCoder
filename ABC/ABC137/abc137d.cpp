
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector< vector<int> > jobs(M);
    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        if(a > M){
            continue;
        }else{
            jobs[M-a].push_back(b);
        }
    }

    priority_queue<int> q;
    long long ans = 0;
    for(int i = M-1; i >= 0; i--){
        for(int b : jobs[i]){
            q.push(b);
        }

        if(!q.empty()){
            ans += q.top();
            q.pop();
        }
    }

    cout << ans << endl;


    return 0;
}