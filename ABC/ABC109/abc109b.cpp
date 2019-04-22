
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    char w[n][101];
    for(int i = 0; i < n; i++){
        scanf("\n%s",w[i]);
    }

    bool check = true;
    for(int i = 0; i + 1 < n; i++){
        if(w[i][strlen(w[i]) - 1] != w[i + 1][0]){
            check = false;
            break;
        }
    }
    if(check == false){
        printf("No\n");

        return 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(strcmp(w[i],w[j]) == 0){
                check = false;
            }
        }
    }

    if(check == true){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}