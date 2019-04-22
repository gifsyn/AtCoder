
#include <cstdio>

int gcd(int , int );

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int ans = a[0];
    for(int i = 1; i < n; i++){
        ans = gcd(ans, a[i]);
    }

    printf("%d\n",ans);

    return 0;
}

int gcd(int a, int b){
    if(a < b){
        return gcd(b, a);
    }else{
        int r = a % b;
        while(r != 0){
            a = b;
            b = r;
            r = a % b;
        }

        return b;
    }
}


// #include <cstdio>
// #include <algorithm>

// using namespace std;

// int f_min(int [], int);
// int f_max(int [], int);

// int main(){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     int ans;
//     for(int i = 0; i < n; i++){
//         int min_a = f_min(a, n);
//         if(min_a == 1){
//             ans = min_a;
//             printf("%d\n", ans);

//             return 0;
//         }else if(f_min(a, n) == f_max(a, n)){
//             ans = a[0];
//             printf("%d\n", ans);

//             return 0;
//         }

//         for(int i = 0; i < n; i++){
//             if(a[i] % min_a != 0){
//                 a[i] = (a[i] % min_a);
//             }else{
//                 a[i] = min_a;
//             }
//         }
//     }
//     ans = f_min(a, n);
//     printf("%d\n", ans);

//     return 0;
// }

// int f_min(int a[], int n){
//     int min_a = a[0];
//     for(int i = 0; i < n; i++){
//         min_a = min(min_a, a[i]);
//     }

//     return min_a;
// }

// int f_max(int a[], int n){
//     int max_a = a[0];
//     for(int i = 0; i < n; i++){
//         max_a = max(max_a, a[i]);
//     }

//     return max_a;
// }