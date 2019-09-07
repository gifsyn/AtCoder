
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <deque>

// using namespace std;

// int main(){
//     int N, K;
//     cin >> N >> K;
//     string S;
//     cin >> S;
//     deque<int> cnt;
//     int len = 1;
//     for(int i = 0; i < N; i++){
//         if(i < N-1 && S[i] == S[i+1]){
//             len++;
//         }else if(i == N-1){
//             cnt.push_back(len);
//         }else{
//             cnt.push_back(len);
//             len = 1;
//         }
//     }


//     int p;
//     for(int i = 0; i < K; i++){
//         if(cnt.size() == 1){
//             break;
//         }else{
//             p = cnt[0] + cnt[1];
//             cnt.pop_front();
//             cnt.pop_front();
//             cnt.push_front(p);
//         }

//         if(cnt.size() == 1){
//             break;
//         }else{
//             p = cnt[cnt.size()-1] + cnt[cnt.size()-2];
//             cnt.pop_back();
//             cnt.pop_back();
//             cnt.push_back(p);
//         }
//     }

//     int ans = 0;
//     for(int i = 0; i < cnt.size(); i++){
//         ans += cnt[i]-1;
//     }

//     cout << ans << endl;


//     return 0;
// }


#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    int ans = 0;
    for(int i = 0; i < N-1; i++){
        if(S[i] == S[i+1]){
            ans++;
        }
    }

    ans = min(ans+2*K, N-1);

    cout << ans << endl;


    return 0;
}