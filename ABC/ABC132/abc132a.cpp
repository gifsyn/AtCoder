
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n = 4;
    char s[n];
    scanf("%s", s);

    
    int count;
    bool f = true;
    for(int i = 0; i < n; i++){
        count = 1;
        for(int j = 0; j < n; j++){
            if(i != j && s[i] == s[j]){
                count++;
            }
        }
        if(count != 2){
            f = false;
        }
    }

    if(f){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    

    return 0;
}