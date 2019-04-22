
#include <cstdio>

int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long ans;
	long long d = 1000000007;
	ans = a % d * b % d * c % d;
    printf("%lld\n",ans);

	return 0;
}