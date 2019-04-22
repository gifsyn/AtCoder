
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
	string s;
    scanf("%d",&n);
    cin >> s;

	if (s == "b") {
		printf("%d\n",0);

		return 0;
	}

    string w = "b";
	for (int i = 1; i <= (n - 1) / 2; i++){

        if(i % 3 == 1){
			w = 'a' + w;
			w = w + 'c';
		}else if(i % 3 == 2){
			w = 'c' + w;
			w = w + 'a';
		}else if (i % 3 == 0){
			w = 'b' + w;
			w = w + 'b';
		}

		if(w == s){
			printf("%d",i);

			return 0;
		}
	}

	printf("%d\n",-1);

	return 0;
}