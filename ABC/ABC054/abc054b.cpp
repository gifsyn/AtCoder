
#include <cstdio>
#include <cstring>

void swap(char *, char *);

int main(void){
	int n,l;
	scanf("%d%d",&n,&l);
	char s[100][101];
	for(int i = 0; i < n; i++){
        scanf("%s", s[i]);
    }
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(strcmp(s[i], s[j]) < 0){
                swap(s[i],s[j]);
            }
		}
	}
	
	for(int i = 0; i < n; i++){
        printf("%s",s[i]);
    }
    printf("\n");

	return 0;
}

void swap(char *a, char *b){
	char c[101];
	strcpy(c, a);
	strcpy(a, b);
	strcpy(b, c);
}