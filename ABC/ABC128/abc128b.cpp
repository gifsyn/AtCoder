
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;

char city[11];
int n;
#define n_MAX 101
pair< pair<string, int>, int> P[n_MAX];

int main(){
    scanf("%d", &n);
    int t;
    string tmp;
    for(int i = 0; i < n; i++){
        scanf("%s %d", city, &t);
        tmp = city;
        P[i] = make_pair(make_pair(tmp, -t), i);
    }

    sort(P, P+n);

    for(int i = 0; i < n; i++){
        printf("%d\n", P[i].second+1);
    }

    return 0;
}