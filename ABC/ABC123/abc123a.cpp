
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int a[5];
    int k;
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    bool f = true;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(abs(a[i] - a[j]) > k){
                f = false;
                break;
            }
        }
        if(f == false){
            break;
        }
    }

    if(f){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }

    return 0;
}