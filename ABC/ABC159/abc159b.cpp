#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool check_palindrome(string s){
    int n = s.size();
    bool f = true;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-1-i]){
            f = false;
            break;
        }
    }

    return f;
}


int main(){
    string S;
    cin >> S;
    int n = S.size();
    string T = S.substr(0, (n-1)/2);
    string U = S.substr((n+3)/2-1, (n-1)/2);
    if(check_palindrome(S) && check_palindrome(T) && check_palindrome(U)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}