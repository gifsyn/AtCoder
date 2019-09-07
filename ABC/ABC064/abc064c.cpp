
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    map<int, int> M;
    for(int i = 0;i < N; i++){
        if(a[i] < 400){
            M[0]++;
        }else if(a[i] < 800){
            M[1]++;
        }else if(a[i] < 1200){
            M[2]++;
        }else if(a[i] < 1600){
            M[3]++;
        }else if(a[i] < 2000){
            M[4]++;
        }else if(a[i] < 2400){
            M[5]++;
        }else if(a[i] < 2800){
            M[6]++;
        }else if(a[i] < 3200){
            M[7]++;
        }else{
            M[8]++;
        }
    }

    int ans_min = 0;
    int ans_max = 0;
    for(auto p : M){
        if(p.first != 8){
            ans_min++;
            ans_max++;
        }else{
            if(ans_min == 0){
                ans_min++;
            }
            ans_max += p.second;
        }
    }
    cout << ans_min << " " << ans_max << endl;


    return 0;
}