
#include "iostream"

using namespace std;

int main(){
	int N;
	cin >> N;
	int h[N];
	for(int i = 0; i < N; i++){
        cin >> h[i];
    }

	long long ans = 0;
    bool f;
	while(true){
        f = false;
        for(int i = 0; i < N; i++){
            if(h[i] > 0){
                f = true;
            }
        }
        if(f == false){
            break;
        }

        int i = 0;
		while(i < N){
			if(h[i] == 0){
				i++;
			}else{
				ans++;
                while(i < N && h[i] > 0){
                    h[i]--;
                    i++;
                }
			}
		}
	}

	cout << ans << endl;


    return 0;
}