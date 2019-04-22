
#include <cstdio>
#include <cstring>

int main(){
	int n;
	scanf("%d",&n);
    char a[n][51];
	for(int i = 0; i < n; i++){
		scanf("%s",a[i]);
	}

    int b[n];
    int max = 0;
    int ans;
	
	for(int j = 0; j < n; j++){
		b[j] = 0;
		for(int k = 0; k < n; k++){
            if(strcmp(a[j],a[k]) == 0){
                b[k]++;
            }
		}
    }
    for(int l = 0; l < n; l++){
        if(b[l] > max){
            max = b[l];
            ans = l;
        }
    }

	printf("%s\n",a[ans]);

	return 0;
}