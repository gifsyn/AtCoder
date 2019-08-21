
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> nums;
    if(S[0] == '0'){
        nums.push_back(0);
    }
    for(int i = 0; i < S.size();){
        int j = i;
        while(j < S.size() && S[j] == S[i]){
            j++;
        }
        nums.push_back(j - i);
        i = j;
    }
    if(S.back() == '0'){
        nums.push_back(0);
    }


    vector<int> sums((int)nums.size()+1, 0);
    for(int i = 0; i < nums.size(); i++){
        sums[i+1] = sums[i] + nums[i];
    }


    int ans = 0;
    for(int l = 0; l < sums.size(); l += 2) {
        int r = l+K*2+1;
        if(r >= sums.size()){
            r = (int)sums.size()-1;
        }
        ans = max(ans, sums[r]-sums[l]);
    }
    cout << ans << endl;


    return 0;
}