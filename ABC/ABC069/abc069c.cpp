
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    int cnt = 0, cnt_2 = 0, cnt_4 = 0;
    for(int i = 0; i < N; i++){
        if(a[i] % 4 == 0){
            cnt_4++;
        }else if(a[i] % 2 == 0){
            cnt_2++;
        }else{
            cnt++;
        }
    }

    if(cnt_2 == 0 && cnt <= cnt_4+1){
        cout << "Yes" << endl;
    }else if(cnt <= cnt_4){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}