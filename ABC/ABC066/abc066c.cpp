
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    deque<long long> ans;
    for(int i = 0; i < n; i++){
        if(i % 2 == (n-1) % 2){
            ans.push_front(a[i]);
        }else{
            ans.push_back(a[i]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << (i == n-1 ? "\n" : " ");
    }


    return 0;
}