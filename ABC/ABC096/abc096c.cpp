
#include <iostream>

using namespace std;

int main() {
    int H, W;
	cin >> H >> W;
    char s[H][W];
	for(int i = 0; i < H; i++){
		for(int j = 0; j < W; j++){
            cin >> s[i][j];
        }
	}

    int cnt = 0;
	for(int i = 1; i < H-1; i++) {
		for(int j = 1; j < W-1; j++){
			if(s[i][j] == '#' && s[i][j - 1] != '#' && s[i - 1][j] != '#' && s[i][j + 1] != '#' && s[i + 1][j] != '#'){
                cnt++;
                break;
            }
		}
        if(cnt != 0){
            break;
        }
	}
	if(cnt == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


	return 0;
}