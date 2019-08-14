
#include <iostream>

using namespace std;


long long f(long long n, long long x){
	if(n == -1){
        return 0;
    }else{
        return n/x+1;
    }
}


int main(){
	long long a, b, x;
	cin >> a >> b >> x;

	cout << f(b, x) - f(a - 1, x) << endl;


	return 0;
}