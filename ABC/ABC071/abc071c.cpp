
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<long long, int> M;
    long long a;
    for(int i = 0; i < N; i++){
        cin >> a;
        M[a]++;
    }

    vector<long long> A;
    for(auto p : M){
        if(p.second >= 4){
            A.push_back(p.first);
            A.push_back(p.first);
        }else if(p.second >= 2){
            A.push_back(p.first);
        }
    }

    sort(A.begin(), A.end());

    long long ans;
    if(A.size() >= 2){
        ans = A[A.size()-1] * A[A.size()-2];
    }else{
        ans = 0;
    }

    cout << ans << endl;


    return 0;
}