
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    char s[n][21];
    int p[n];
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        scanf("%s %d",s[i],&p[i]);
        sum += p[i];
        if(p[max] < p[i]){
            max = i;
        }
    }

    if(p[max] > sum / 2){
        printf("%s\n",s[max]);
    }else{
        printf("atcoder\n");
    }

    return 0;
}