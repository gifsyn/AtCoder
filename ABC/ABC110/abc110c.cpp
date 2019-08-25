
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    vector<int> cnt_S(26, 0);
    vector<int> cnt_T(26, 0);
    for(int i = 0; i < S.size(); i++){
        cnt_S[S[i]-'a']++;
        cnt_T[T[i]-'a']++;
    }

    sort(cnt_S.begin(), cnt_S.end());
    sort(cnt_T.begin(), cnt_T.end());

    if(cnt_S == cnt_T){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}