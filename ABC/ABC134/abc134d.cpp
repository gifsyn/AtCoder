
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    vector<int> ans;
    vector<int> b(N + 1, 0);
    for(int i = N; i >= 1; i--){
        int sum = 0;
        for(int j = i; j <= N; j += i){
            sum += b[j];
        }
        if(sum % 2 != a[i]){
            b[i]++;
            ans.push_back(i);
        }
    }

    if(!ans.empty()){
        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size()-1; i++){
            cout << ans[i] << " ";
        }
        cout << ans[ans.size()-1] << endl;
    }else{
        cout << ans.size() << endl;
    }


    return 0;
 }