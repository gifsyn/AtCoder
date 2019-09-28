
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<int, int> A;
    int a;
    for(int i = 1; i <= N; i++){
        cin >> a;
        A[a] = i;
    }


    for(auto p : A){
        cout << p.second << (p.first == N ? "\n" : " "); 
    }


    return 0;
}