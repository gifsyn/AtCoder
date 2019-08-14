
#include <iostream>

using namespace std;

int main(){
	int W, H, N;
	cin >> W >> H >> N;

    int x, y, a;
    int x_max = W;
    int x_min = 0;
    int y_max = H;
	int y_min = 0;
	for(int i = 0; i < N; i++){
		cin >> x >> y >> a;
		switch(a){
            case 1:
                if(x_min < x){
                    x_min = x;
                }
                break;
            case 2:
                if(x_max > x){
                    x_max = x;
                }
                break;
            case 3:
                if(y_min < y){
                    y_min = y;
                }
                break;
            case 4:
                if(y_max > y){
                    y_max = y;
                }
                break;
            }
	}

	if(x_max > x_min && y_max > y_min) {
		cout << (x_max - x_min) * (y_max - y_min) << endl;
	} else {
		cout << 0 << endl;
	}


	return 0;
}