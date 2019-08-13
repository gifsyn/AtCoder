
#include <iostream>

using namespace std;
 
int main(){
    long long N, K;
    cin >> N >> K;
    long long a[N];
    for(int i = 0; i < N; ++i){
        cin >> a[i];
    }

    long long ans = 0;
        
    int right = 0;
    long long sum = 0;
    for(int left = 0; left < N; left++){
        while(right < N && sum < K){
            sum += a[right];
            right++;
        }
        if(sum < K){
            break;
        }

        ans += (long long)(N - right + 1);

        if(right == left){
            right++;
        }else{
            sum -= a[left];
        }
    }
 
    cout << ans << endl;


    return 0;
}