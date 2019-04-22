
#include <cstdio>
#include <cstring>

int main(){
    int n;
    scanf("%d",&n);
    char s[n][11];
    for(int i = 0; i < n; i++){
        scanf("%s",s[i]);
    }
    int m;
    scanf("%d",&m);
    char t[m][11];
    for(int i = 0; i < m; i++){
        scanf("%s",t[i]);
    }

    char a[11];
    int count;
    int max = 0;
    for(int i = 0; i < n; i++){
        strcpy(a,s[i]);
        count = 0;
        for(int j = 0; j < n; j++){
            if(strcmp(a,s[j]) == 0){
                count++;
            }
        }
        for(int j = 0; j < m; j++){
            if(strcmp(a,t[j]) == 0){
                count--;
            }
        }
        if(count > max){
            max = count;
        }
    }

    printf("%d\n",max);

    return 0;
}