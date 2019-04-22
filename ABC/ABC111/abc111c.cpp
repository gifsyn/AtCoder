
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    int a[(int)10e5 + 1];
    for(int i = 0; i < (int)10e5 + 1; i++){
        a[i] = 0;
    }
    for(int i = 0; i < n; i = i + 2){
        a[v[i]]++;
    }
    int b[(int)10e5 + 1];
    for(int i = 0; i < (int)10e5 + 1; i++){
        b[i] = 0;
    }
    for(int i = 1; i < n; i = i + 2){
        b[v[i]]++;
    }


    int max1_a_1 = a[0];
    for(int i = 0; i < (int)10e5 + 1; i++){
        if(max1_a_1 < a[i]){
            max1_a_1 = i;
        }
    }
    printf("max1_a_1 = %d\n",max1_a_1);

    int max2_a_1 = a[0];
    for(int i = 0; i < (int)10e5 + 1; i++){
        if(max2_a_1 < b[i] && i != max1_a_1){
            max2_a_1 = i;
        }
    }
    printf("max2_a_1 = %d\n",max2_a_1);


    int max1_a_2 = a[0];
    for(int i = 0; i < (int)10e5 + 1; i++){
        if(max1_a_2 < a[i]){
            max1_a_2 = i;
        }
    }
    printf("max1_a_2 = %d\n",max1_a_2);

    int max2_a_2 = a[0];
    for(int i = 0; i < (int)10e5 + 1; i++){
        if(max2_a_2 < b[i] && i != max1_a_2){
            max2_a_2 = i;
        }
    }
    printf("max2_a_2 = %d\n",max2_a_2);


    int count_1 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] != max1_a_1){
                count_1++;
            }
        }else{
            if(v[i] != max2_a_1){
                count_1++;
            }
        }
    }

    int count_2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] != max1_a_2){
                count_2++;
            }
        }else{
            if(v[i] != max2_a_2){
                count_2++;
            }
        }
    }
    
    printf("%d\n",min(count_1, count_2));

    return 0;
}