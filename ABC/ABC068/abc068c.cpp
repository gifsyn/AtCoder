
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    map<int, int> RS;
    int a, b;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        if(a == 1){
            RS[b]++;
        }
        if(b == N){
            RS[a]++;
        }
    }

    bool F = false;
    for(auto p : RS){
        if(p.second >= 2){
            F = true;
            break;
        }
    }

    if(F == true){
        cout << "POSSIBLE" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }


    return 0;
}