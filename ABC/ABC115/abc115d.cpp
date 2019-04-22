
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int n;
    unsigned long long x;
    scanf("%d %lld",&n, &x);

    string str_1 = ("P");
    string str_2;
    for(int i = 0; i < n; i++){
        str_2 = "B" + str_1 + "P" + str_1 + "B";
        str_1 = str_2;
        if(str_1.length() >= x){
            str_1 = str_1.substr(0, str_1.length());
        }
    }
    
    unsigned long long ans = 0;
    for(unsigned long long i = 0; i < x; i++){
        if(str_1[i] == 'P'){
            ans++;
        }
    }
    printf("%lld\n",ans);

    return 0;
}