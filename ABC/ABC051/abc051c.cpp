
#include <iostream>

using namespace std;

int main(){
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    
    string ans = "";
    int x = tx -sx;
    int y = ty -sy;
    // for(int i = 1; i <= y; i++){
    //     ans += "U";
    // }
    ans += string(y, 'U');
    // for(int i = 1; i <= x; i++){
    //     ans += "R";
    // }
    ans += string(x, 'R');
    // for(int i = 1; i <= y; i++){
    //     ans += "D";
    // }
    ans += string(y, 'D');
    // for(int i = 1; i <= x+1; i++){
    //     ans += "L";
    // }
    ans += string(x+1, 'L');
    // for(int i = 1; i <= y+1; i++){
    //     ans += "U";
    // }
    ans += string(y+1, 'U');
    // for(int i = 1; i <= x+1; i++){
    //     ans += "R";
    // }
    ans += string(x+1, 'R');
    // ans += "DR";
    ans += "DR";
    // for(int i = 1; i <= y+1; i++){
    //     ans += "D";
    // }
    ans += string(y+1, 'D');
    // for(int i = 1; i <= x+1; i++){
    //     ans += "L";
    // }
    ans += string(x+1, 'L');
    // ans += "U";
    ans += "U";

    cout << ans << endl;


    return 0;
}