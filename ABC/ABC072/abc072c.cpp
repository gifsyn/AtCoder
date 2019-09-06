
#include <iostream>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<int, int> A;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        A[a+1]++;
        A[a-1]++;
        A[a]++;
    }

    int ans = 0;
    for(auto p : A){
        ans = max(ans, p.second);
    }

    cout << ans << endl;


    return 0;
}