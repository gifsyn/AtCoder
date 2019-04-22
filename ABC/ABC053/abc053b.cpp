
#include<cstdio>
#include<cstring>

int main(){
    char s[200001];
	scanf("%s",s);
	int a,z;
	for(int i = 0; ; i++){
		if(s[i] == 'A'){
			a =i;
			break;
		}
	}
	for(int i = strlen(s); ; i--){
		if(s[i]=='Z'){
			z = i;
			break;
		}
	}

	printf("%d\n",z - a + 1);

	return 0;
}