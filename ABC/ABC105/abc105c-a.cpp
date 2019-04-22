
#include <iostream>
#include <cstdio>

using namespace std;

using ll = long long;

#define for_(i, a, b) for(int i = (a);i < (b);++i)
#define rfor_(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) for_(i, 0, n)
#define rrep(i, n) rfor_(i, 0, n)

int n;
int s[100];
 int count_d;

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);

  cin>>n;
  if(n == 0){
      printf("%d\n",0);
  }

  for(int i = 0; n != 0; i++){
      s[i] = ((n % 2) + 2) % 2;
      n = (n - s[i]) / -2;
      count_d++;
  }


  rrep(i, count_d){
      cout<<s[i];
  }
  cout<<endl;
  
  return 0;
}