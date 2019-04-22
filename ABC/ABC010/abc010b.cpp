
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        switch(a[i] % 6){
            case 0:
                count += 3;
                break;
            case 1:
                break;
            case 2:
                count++;
                break;
            case 3:
                break;
            case 4:
                count++;
                break;
            case 5:
                count += 2;
                break;
        }
    }
    printf("%d\n",count);

    return 0;
}