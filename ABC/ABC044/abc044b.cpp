
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string w;
    cin >> w;
    vector<int> cnt(26, 0);
    for(int i = 0; i < w.length(); i++){
        cnt[w[i]-'a']++;
    }

    bool F = true;
    for(int i = 0; i < cnt.size(); i++){
        if(cnt[i] % 2 == 1){
            F = false;
            break;
        }
    }

    if(F == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}