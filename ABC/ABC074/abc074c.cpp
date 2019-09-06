
#include <iostream>
#include <set>

using namespace std;

long long A, B, C, D, E, F;
set<long long> W, S;
double per = 0;
long long ans, sub;

int main(){
	cin >> A >> B >> C >> D >> E >> F;

	for(int i = 0; i*(100*A) <= F; i++){
		for(int j = 0; j*(100*B) <= F; j++){
			W.insert((long long)(i*100*A+j*100*B));
		}
	}

	for(int i = 0; i*C <= F; i++){
		for(int j = 0; j*D <= F; j++){
            S.insert((long long)(i*C+j*D));
		}
	}

	for(long long w : W){
		for(long long s : S){
			if((0 < w+s && w+s <= F) && (w*E/100 >= s)){
				double res = (double)100 * (double)s / (double)(w+s);
				if (res >= per){
					ans = w+s;
					sub = s;
					per = res;
				}
			}
		}
	}
	
	cout << ans << " " << sub << endl;


	return 0;
}