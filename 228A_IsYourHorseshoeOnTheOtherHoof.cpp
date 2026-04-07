#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int A[4];
    int  s, count = 0;
    for (int i = 0; i < 4; i++){
        cin >> s;
        A[i]=s;
    }
    sort(A, A+4);

    for (int i = 0; i < 4; i++){
        if(A[i] != A[i+1])
            count++;
    }

    cout << 4-(count);
    return 0;
}