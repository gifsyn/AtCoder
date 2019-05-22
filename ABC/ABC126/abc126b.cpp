
#include <cstdio>

bool judge_M(int a, int b){
    int c = 10 * a + b;
    if(1 <= c && c <= 12){
        return true;
    }else{
        return false;
    }
}


int main(){
    char s[4+1];
    scanf("%s", s);
    int a[4];
    for(int i = 0; i < 4; i++){
        a[i] = s[i] - '0';
    }

    if(judge_M(a[0], a[1]) && judge_M(a[2], a[3])){
        printf("AMBIGUOUS\n");
    }else if(judge_M(a[2], a[3])){
        printf("YYMM\n");
    }else if(judge_M(a[0], a[1])){
        printf("MMYY\n");
    }else{
        printf("NA\n");
    }

    return 0;
}