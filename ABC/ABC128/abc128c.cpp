
#include "iostream"
#include "vector"

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;

	vector<int> k(M);
	vector< vector<int> > s(M);
	for(int i = 0; i < M; i++){
		cin >> k[i];
		for(int j = 0; j < k[i]; j++){
			int a;
			cin >> a;
			s[i].push_back(a);
		}
	}

	vector<int> p(M);
	for(int i = 0; i < M; i++){
		cin >> p[i];
	}

	long long ans = 0;
	for(int bit = 0; bit < (1<<N); bit++){
		bool f = true;
		for(int i = 0; i < M; i++){
			int count = 0;
			for(int j = 0; j < k[i]; j++){
				if(bit & (1<<(s[i][j]-1))){
					count++;
				}
			}

			if(count % 2 != p[i]){
				f = false;
				break;
			}
		}
		if(f){
			ans++;
		}
	}

	cout << ans << endl;


	return 0;
}