
#include <cstdio>

unsigned long long fn_f(unsigned long long );

unsigned long long a[1000000];

int main(){
    int s;
    scanf("%d",&s);

    bool E = false;
    int m;

    for(int i = 0; i < 1000000; i++){
        if(i == 0){
            a[0] = s;
        }else{
            a[i] = fn_f(a[i - 1]);
            for(int j = i - 1; j >= 0; j--){
                if(a[i] == a[j]){
                    E = true;
                    m = i + 1;
                    break;
                }
            }
        }

        if(E){
            break;
        }
    }

    printf("%d\n",m);

    return 0;
}


unsigned long long fn_f(unsigned long long n){
    if(n % 2 == 0){
        return n / 2;
    }else{
        return 3 * n + 1;
    }
}