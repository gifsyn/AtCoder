
#include "iostream"

using namespace std;

int main(){
    int N;
	cin >> N;
    
    int ans = N;
    int n;
    int res;
	for(int i = 0; i <= N; i++){
        res = 0;

        n = i;
		while(n > 0){
			res += n%6;
			n /= 6;
		}

		n = N - i;
		while(n > 0){
			res += n%9;
			n /= 9;
		}

		ans = min(ans, res);
	}

	cout << ans << endl;
	
    
    return 0;
}