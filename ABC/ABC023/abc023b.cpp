
#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	string t = "b";
	int cnt = 0;
	if(s == "b"){
		cout << cnt <<endl;
		return 0;
	}

	while(t.size() <= s.size()){
		cnt++;
		if(cnt%3 == 1){
			t = 'a' + t + 'c';
		}else if(cnt%3 == 2){
			t = 'c' + t + 'a';
		}else{
			t = 'b' + t + 'b';
		}
		if(t == s){
			cout<< cnt <<endl;
			return 0;
		}
	}

	cout << -1 <<endl;
	return 0;
}



// #include <cstdio>
// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int n;
// 	string s;
//     scanf("%d",&n);
//     cin >> s;

// 	if (s == "b") {
// 		printf("%d\n",0);

// 		return 0;
// 	}

//     string w = "b";
// 	for (int i = 1; i <= (n - 1) / 2; i++){

//         if(i % 3 == 1){
// 			w = 'a' + w;
// 			w = w + 'c';
// 		}else if(i % 3 == 2){
// 			w = 'c' + w;
// 			w = w + 'a';
// 		}else if (i % 3 == 0){
// 			w = 'b' + w;
// 			w = w + 'b';
// 		}

// 		if(w == s){
// 			printf("%d\n",i);

// 			return 0;
// 		}
// 	}

// 	printf("%d\n",-1);

// 	return 0;
// }