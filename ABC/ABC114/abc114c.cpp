
#include <iostream>

using namespace std;

long long N;


void dfs(long long n, int use, long long &cnt){
    if (n > N){
        return ;
    }

    if (use == 0b111){
        cnt++;
    }

    dfs(n * 10 + 7, use | 0b001, cnt);

    dfs(n * 10 + 5, use | 0b010, cnt);

    dfs(n * 10 + 3, use | 0b100, cnt);
}


int main() {
    cin >> N;

    long long ans = 0;
    dfs(0, 0, ans);
    cout << ans << endl;


    return 0;
}