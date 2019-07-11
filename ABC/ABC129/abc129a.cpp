
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int p[3];
    int max_p = 0;
    int sum = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d", &p[i]);
        max_p = max(max_p, p[i]);
        sum += p[i];
    }

    printf("%d\n", sum - max_p);

    return 0;
}