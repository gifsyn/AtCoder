
#include <cstdio>

int main(){
    int h,w;
    scanf("%d %d",&h,&w);
    char s[h][w + 1];
    for(int i = 0; i < h; i++){
        scanf("%s",s[i]);
    }

    int count;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '.'){
                count = 0;
                if(i - 1 >= 0 && j - 1 >= 0){
                    if(s[i - 1][j - 1] == '#'){
                        count++;
                    }
                }
                if(i - 1 >= 0){
                    if(s[i - 1][j] == '#'){
                        count++;
                    }
                }
                if(i - 1 >= 0 && j + 1 < w){
                    if(s[i - 1][j + 1] == '#'){
                        count++;
                    }
                }
                if(j - 1 >= 0){
                    if(s[i][j - 1] == '#'){
                        count++;
                    }
                }
                if(j + 1 < w){
                    if(s[i][j + 1] == '#'){
                        count++;
                    }
                }
                if(i + 1 < h && j - 1 >= 0){
                    if(s[i + 1][j - 1] == '#'){
                        count++;
                    }
                }
                if(i + 1 < h){
                    if(s[i + 1][j] == '#'){
                        count++;
                    }
                }
                if(i + 1 < h && j + 1 < w){
                    if(s[i + 1][j + 1] == '#'){
                        count++;
                    }
                }

                s[i][j] = '0' + count;
            }
        }
    }

    for(int i = 0; i < h; i++){
        printf("%s\n",s[i]);
    }

    return 0;
}