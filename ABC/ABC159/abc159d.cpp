#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> nums(N+1, 0);
    for(int i=0; i<N; i++){
        cin >> A[i];
        nums[A[i]]++;
    }

    ll sum = 0;
    for(int i=1; i<=N; i++){
        sum += nums[i]*(nums[i]-1)/2;
    }

    for(int i=0; i<N; i++){
        cout << sum - nums[A[i]]*(nums[A[i]]-1)/2 + (nums[A[i]]-1)*(nums[A[i]]-2)/2 << endl;
    }

    return 0;
}