
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    char S[11];
    scanf("\n%s", S);
    int count;
    int max_count = 0;
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
            count = 1;
            for(int j = i + 1; S[j] != '\0'; j++){
                if(S[j] == 'A' || S[j] == 'C' || S[j] == 'G' || S[j] == 'T'){
                    count++;
                }else{
                    break;
                }
            }
            max_count = max(max_count, count);
        }
    }

    printf("%d\n", max_count);

    return 0;
}