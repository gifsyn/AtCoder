
#include <cstdio>
#include <cstring>

int main(){
    char s[101];
	scanf("%s",s);

    int count[6];
    for(int i = 0; i < 6; i++){
        count[i] = 0;
    }

	for(int i = 0; i < strlen(s); i++){
        count[s[i]-'A']++;
	}

	for(int i = 0; i < 5; i++){
        printf("%d ",count[i]);
	}
	printf("%d\n",count[5]);

    return 0;
}