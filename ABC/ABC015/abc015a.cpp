
#include <cstdio>
#include <cstring>

int main(){
    char a[51],b[51];
    scanf("%s\n%s",a,b);
    if(strlen(a) > strlen(b)){
        printf("%s\n",a);
    }else{
        printf("%s\n",b);
    }

    return 0;
}