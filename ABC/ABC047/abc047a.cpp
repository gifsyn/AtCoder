
#include <cstdio>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s[] = {a,b,c};
    int max = a;
    int others = 0;
    for(int i = 1; i < 3; i++){
        if(max <= s[i]){
            others += max;
            max = s[i];
        }
        else{
            others += s[i];
        }
    }

    if(max == others){
        printf("Yes");
    }
    else{
        printf("No");
    }
    printf("\n");

    return 0;
}