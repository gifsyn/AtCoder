
#include <cstdio>

void SR(char S[], int countsl);

int main(){
    char S[101],T[101];
    scanf("%s\n%s",S,T);
    int countsl = 0;
    for(int i = 0; S[i] != '\0'; i++){
        countsl++;
    }
    int n;
    for(int i = 0; i < countsl; i++){
        SR(S, countsl);
        n = 0;
        for(int j = 0; j < countsl; j++){
            if(S[j] == T[j]){
                n++;
            }else{
                break;
            }
        }
        if(n == countsl){
            printf("Yes\n");

            return 0;
        }
    }
    printf("No\n");

    return 0;
}

void SR(char S[], int countsl){
    char E,P,Q;
    E = S[countsl - 1];
    P = S[0];
    for(int i = 1; i < countsl; i++){
        Q = S[i];
        S[i] = P;
        P = Q;

    }
    S[0] = E;

}