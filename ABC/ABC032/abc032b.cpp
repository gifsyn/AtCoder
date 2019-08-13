
#include <iostream>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    set<string> ans;
    for(int i = 0; i+k-1 < s.size(); i++){
        ans.insert(s.substr(i, k));
    }
    cout << ans.size() << endl;


    return 0;
}