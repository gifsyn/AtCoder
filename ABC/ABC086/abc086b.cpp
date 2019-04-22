
#include <cstdio>
#include <cmath>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int count_b_digit = 0;
    int c = b;
    for(int i = 1;; i++){
        if(c / 10 >= 0){
            count_b_digit++;
            c = (c - c % 10) / 10;
        }
        if(c == 0){
            break;
        }
    }
    int d = a * pow(10,count_b_digit) + b;
    int e = sqrt(d);
    if(e * e == d){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}