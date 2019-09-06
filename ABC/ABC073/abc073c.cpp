
#include <iostream>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    map<int, int> A;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(A[a] == 0){
            A[a]++;
        }else{
            A.erase(a);
        }
    }

    cout << A.size() << endl;


    return 0;
}