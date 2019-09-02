
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
	cin >> N;
    int F[N][10];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 10; j++){
			cin >> F[i][j];
		}
	}
    int P[N][11];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 11; j++){
			cin >> P[i][j];
		}
	}


	int ans = INT32_MIN;
    int c;
    int r;
	for(int bit = 1; bit < (1<<10); bit++){
		r = 0;
		for(int i = 0; i < N; i++){
			c = 0;
			for(int j = 0; j < 10; j++){
				if(((bit>>j) & 1) && F[i][j]){
                    c++;
                }
			}
			r += P[i][c];
		}
        ans = max(ans, r);
	}

	cout << ans << endl;


	return 0;
}