
#include <cstdio>

int exchange_A_to_N(char);

int main(){
    int N;
    scanf("%d",&N);
    char S[N];
    scanf("%s",S);

    int max = 0;
    bool used[2][26];
    for(int i = 0; i <= N - 2; i++){
        for(int p = 0; p < 2; p++){
            for(int q = 0; q < 26; q++){
                used[p][q] = false;
            }
        }
        for(int j = 0; j <= i; j++){
            used[0][exchange_A_to_N(S[j])] = true;
        }
        for(int j = N - 1; j > i; j--){
            used[1][exchange_A_to_N(S[j])] = true;
        }
        
        int pmax = 0;
        for(int j = 0; j < 26; j++){
            if(used[0][j] == true && used[1][j] == true){
                pmax++;
            }
        }
        if(pmax > max){
            max = pmax;
        }
    }
    printf("%d\n",max);

    return 0;
}

int exchange_A_to_N(char c){
    
    return (c - 'a');
}