
// #include <cstdio>
// #include <cstring>

// int main(){
//     int n;
//     scanf("%d", &n);
//     double x;
//     char u[4], j[] = "JPY";
//     double sum = 0.0;
//     for(int i = 0; i < n; i++){
//         scanf("%lf %s", &x, &u);

//         if(strcmp(u, j) == 0){
//             sum += x;
//         }else{
//             sum = sum + x * 380000;
//         }

//     }

//     printf("%f\n", sum);

//     return 0;
// }


#include <cstdio>
#include <cstring>

int main(){
    int n;
    scanf("%d", &n);
    double x;
    char u[4];
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        scanf("%lf %s", &x, &u);

        if(u[0] == 'J'){
            sum += x;
        }else{
            sum = sum + x * 380000;
        }

    }

    printf("%f\n", sum);

    return 0;
}