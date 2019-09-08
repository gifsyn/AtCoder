
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    long long ans_1 = 0, ans_2 = 0;
    vector<long long> sum(N);
    for(int i = 0; i < N; i++){
        if(i == 0){
            sum[i] = a[i];
        }else{
            sum[i] = sum[i-1] + a[i];
        }

        if(i % 2 == 1){ // 奇数番目をマイナス
            if(sum[i] >= 0){
                ans_1 += sum[i] + 1;
                sum[i] -= sum[i] + 1;
            }
        }else{ // 偶数番目をプラス
            if(sum[i] <= 0){
                ans_1 += 1-sum[i];
                sum[i] += 1-sum[i];
            }
        }
    }

    for(int i = 0; i < N; i++){
        if(i == 0){
            sum[i] = a[i];
        }else{
            sum[i] = sum[i-1] + a[i];
        }

        if(i % 2 == 1){ // 奇数番目をプラス
            if(sum[i] <= 0){
                ans_2 += 1-sum[i];
                sum[i] += 1-sum[i];
            }
        }else{ // 偶数番目をマイナス
            if(sum[i] >= 0){
                ans_2 += sum[i]+1;
                sum[i] -= sum[i]+1;
            }
        }
    }

    cout << min(ans_1, ans_2) << endl;


    return 0;
}