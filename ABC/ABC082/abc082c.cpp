
#include <iostream>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    map<int, int> M;
    for(int i = 0; i < N; i++){
        M[a[i]]++;
    }

    int ans = 0;
    for(auto p : M){
        if(p.first > p.second){
            ans += p.second;
        }else if(p.first < p.second){
            ans += (p.second - p.first);
        }
        
    }

    cout << ans << endl;


    return 0;
}