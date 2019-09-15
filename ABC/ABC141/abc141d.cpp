
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    priority_queue<long long> A;
    long long a;
    for(long long i = 0; i < N; i++){
        cin >> a;
        A.push(a);

    }

    for(long long i = 0; i < M; i++){
        a = A.top();
        if(a == 0){
            break;
        }else{
            a /= 2LL;
            A.pop();
            A.push(a);
        }
    }

    long long ans = 0;
    while(true){
        ans += A.top();
        A.pop();
        if(A.size() == 0 || A.top() == 0){
            break;
        }
    }
    cout << ans << endl;
    
    

    return 0;
}