
#include <iostream>
#include <cmath>

using namespace std;

int n, d;
const int MAX_n = 10;
const int MAX_d = 10;
int x[MAX_n][MAX_d];

double distance(int i, int j){
    double rep = 0.0;
    for(int k = 0; k < d; k++){
        rep += pow(x[i][k] - x[j][k], 2);
    }

    return pow(rep, 1.0/ 2.0);
}

int main(){
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> x[i][j];
        }
    }

    int count = 0;
    double di;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            di = distance(i, j);
            if((int)di == di){
                count++;
            }
        }
    }

    cout << count << endl;


    return 0;
}