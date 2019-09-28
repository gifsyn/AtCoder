
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    // int cnt = 0;
    // for(int i = 1; i <= N; i++){
    //     if(i % 2 == 1){
    //         cnt++;
    //     }
    // }

    int odd = (N+1)/2;

    printf("%.10f", (double)odd/N);


    return 0;
}