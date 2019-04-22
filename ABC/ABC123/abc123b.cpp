
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    int b = 0;
    int c;
    int q_min = 10;
    for(int i = 0; i < 5; i++){
        c = (a[i] / 10) * 10;
        if(a[i] % 10 == 0){
            b += c;
        }else{
            b += c + 10;
            q_min = min(q_min, a[i] % 10);
        }
    }

    printf("%d\n", b - (10 - q_min));

    return 0;
}