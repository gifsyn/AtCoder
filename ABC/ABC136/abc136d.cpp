
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;

	int n = s.length();
    int ans[n];
	for(int i = 0; i < n; i++){
        ans[i]=0;
    }

	int cnt = 1;
    int a = 0;
	for(int i = 1; i < n; i++){
		if(s[i] == s[i-1]){
            cnt++;
        }else{
			if(s[i]=='L'){
				ans[i] += cnt/2;
				ans[i-1] += (cnt+1)/2;
				a = i;
			}else{
				ans[a] += (cnt+1)/2;
				ans[a-1] += cnt/2;
			}
			cnt=1;
		}
	}
	ans[a] += (cnt+1)/2;
	ans[a-1] += cnt/2;


	for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
	cout << endl;


	return 0;
}