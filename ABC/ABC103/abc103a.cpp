
#include <cstdio>
#include <cstdlib>

int main(){
    int A1,A2,A3;
    scanf("%d%d%d",&A1,&A2,&A3);
    int t[3];
    t[0] = abs(A1 - A2);
    t[1] = abs(A2 - A3);
    t[2] = abs(A3 - A1);
    int maxt = t[0];
    for(int i = 1; i < 3; i++){
        if(maxt < t[i]){
            maxt = t[i];
        }
    }
    printf("%d\n",t[0] + t[1] + t[2] - maxt);

    return 0;
}