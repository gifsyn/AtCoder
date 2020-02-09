#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    for(int i=0; i<N; i++){
        cin >> Q[i];
    }

    map<vector<int>, int> order_num;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        A[i] = i+1;
    }

    int i = 1;
    do{
        order_num[A]=i;
        i++;
    }while(next_permutation(A.begin(), A.end()));

    cout << abs(order_num[P]-order_num[Q]) << endl;

    return 0;
}