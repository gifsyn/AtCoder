
#include <cstdio>

int main(){
    int n;
    long long int k;
    scanf("%d %lld", &n, &k);
    long long int a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }


    long long int sum = 0;
    long long int ans = 0;

    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < n && sum + a[j] < k){
            sum += a[j];
            j++;
        }

        ans += (long long int)(j - i);
        sum -= a[i];
    }

    printf("%lld\n", n * (n + 1) / 2 - ans);

    return 0;
}