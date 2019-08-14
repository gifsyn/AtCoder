
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string w;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            w = w + '0';
        }else if(s[i] == '1'){
            w = w + '1';
        }else{
            if(w.length() == 0){
                continue;
            }else{
                w.pop_back();
            }
        }
    }

    cout << w << endl;


    return 0;
}