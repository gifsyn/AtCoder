
#include<iostream>

using namespace std;

int main(){
    string S;
	cin >> S;
    int s[4];
    for(int i = 0; i < 4; i++){
        s[i] = S[i]-'0';
    }

	int ans = 0;
    int sum;
    int a;
	for(int bit = 0; bit < (1<<4); bit++){
	    sum = s[0];
		a = s[1];
		for(int i = 1; i < 4; i++){
			if(bit & (1<<i)){
				sum += a;
				a = s[i+1];
			}else{
				sum -= a;
				a = s[i+1];
			}
		}

        ans = sum;
        if(ans == 7){
            cout << s[0];
            for(int i = 1; i < 4; i++){
                if(bit & (1 << i)){
                    cout << "+" << s[i];
                }else{
                    cout << "-" << s[i];
                }
            }
            cout << "=" << ans << endl;

            break;
        }
	}


	return 0;
}