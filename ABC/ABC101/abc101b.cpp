
#include <cstdio>

int S(int);

int main(){
    int N;
    scanf("%d",&N);
    if(N % S(N) == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    printf("\n");

    return 0;
}

int S(int m){
    int ans = 0; 
    while(m != 0){
        ans += m % 10;
        m = m / 10;
    }

    return ans;
}