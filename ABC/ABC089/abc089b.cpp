
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    for(int i = 0; i < n; i++){
        scanf("\n %c",&s[i]);
    }

    bool c[4];
    for(int i = 0; i < 4; i++){
        c[i] = true;
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'P' && c[0] == true){
            count++;
            c[0] = false;
        }else if(s[i] == 'W' && c[1] == true){
            count++;
            c[1] = false;
        }else if(s[i] == 'G' && c[2] == true){
            count++;
            c[2] = false;
        }else if(s[i] == 'Y' && c[3] == true){
            count++;
            c[3] = false;
        }
        if(count == 4){
            break;
        }
    }

    if(count == 3){
        printf("Three\n");
    }
    if(count == 4){
        printf("Four\n");
    }

    return 0;
}