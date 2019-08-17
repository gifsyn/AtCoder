
#include <iostream>

using namespace std;

int main(){
	long long S;
	cin >> S;
	
	long long x_2 = 1e9;
	
	int x_3 = (x_2 - S % x_2) % x_2;
	int y_3 = (S + x_3) / x_2;
	
	cout << "0 0 1000000000 1 " << x_3 << " " << y_3 <<endl;


    return 0;
}