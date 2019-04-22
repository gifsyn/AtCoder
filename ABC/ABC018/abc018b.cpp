
#include<cstdio>

int main() {
    char s[101];
    scanf("%s",s);
	int n;
	scanf("%d",&n);
    int l[n];
	int r[n];

	for(int i = 0; i < n; i++){
        scanf("%d %d",&l[i],&r[i]);
	}
	
	char c;
	for (int i = 0; i < n; i++) {
			int a = l[i],b = r[i];
			for (int j = 0; j <= (r[i] - l[i]) / 2; j++){
				c = s[b - 1];
				s[b - 1] = s[a - 1];
				s[a - 1] = c;
				b--;
                a++;
			}
	}
    printf("%s\n",s);

	return 0;
}