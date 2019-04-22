
#include <cstdio>
#include <cstring>

int main(){
    char s[101],t[101];
    scanf("%s\n%s",s,t);
    char a;
    for(int i = 0; s[i] != 0; i++){
        for(int j = i + 1; s[j] != 0; j++){
			if(s[i] > s[j]){
				a = s[i];
				s[i] = s[j];
				s[j] = a;
			}
		}
	}
    for(int i = 0; t[i] != 0; i++){
        for(int j = 0; t[j] != 0; j++){
            if(t[i] > t[j]){
                a = t[i];
                t[i] = t[j];
                t[j] = a;
            }
        }
    }
    if(strcmp(s, t) < 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}