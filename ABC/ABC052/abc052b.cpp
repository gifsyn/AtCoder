
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    char S[N+1];
    cin >> S;
    
    int ans = 0;
    int x = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'I'){
            x++;
            ans = max(ans, x);
        }else{
            x--;
        }
    }

    cout << ans << endl;


    return 0;
}