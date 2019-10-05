
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    bool AM[N][N];
    string S;
    for(int i = 0; i < N; i++){
        cin >> S;
        for(int j = 0; j < N; j++){
            if(S[j] == '1'){
                AM[i][j] = true;
            }else{
                AM[i][j] = false;
            }
        }
    }

    
    
    


    



    return 0;
}