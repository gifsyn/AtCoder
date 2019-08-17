
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	long long N;
	cin >> N;
	vector<long long> a(N);
	for(int i = 0; i < N; i++){
        cin >> a[i];
    }

	map<long long, long long> cnt;
	for(int i = 0; i < N; i++){
        cnt[a[i]]++;
    }

	bool ans = false;

    if(cnt.size() == 1 && cnt[0] == N){
		ans = true;
	}else if(cnt.size() == 2){
        long long b[2];
		long long d[2];
		long long c = 0;
		for(auto i : cnt){
			b[c] = i.second;
			d[c] = i.first;
			c++;
		}

		sort(b, b+2);
		sort(d, d+2);
        
		if(N % 3 == 0){
			if(cnt[d[1]] == cnt[d[0]]*2 && d[0] == 0){
                ans = true;
            }
		}
    }else if(cnt.size() == 3){
        long long b[3];
		long long d[3];
		long long c = 0;
		for(auto i : cnt){
			b[c] = i.second;
			d[c] = i.first;
			c++;
		}

        sort(b, b+3);

        if(N % 3 == 0 && ((d[0]^d[1])==d[2])&&((d[0]^d[2])==d[1])&&((d[1]^d[2])==d[0])){
            if(b[0] == N/3 && b[1] == N/3 && b[2] == N/3){
                ans = true;
            }
        }
    }

	cout << (ans ? "Yes" : "No") << endl;


    return 0;
}