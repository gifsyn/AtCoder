
#include <iostream>

using namespace std;

int main(){
    int K, X;
    cin >> K >> X;
    int l = X-(K-1);
    int r = X+(K-1);
    
    for(int i = l; i <= r; i++){
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}