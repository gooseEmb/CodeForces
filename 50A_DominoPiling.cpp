#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >>n;
    if ((m>=1) & (m<=n) & (n<=16)){
        cout <<( m*n)/2;
    }

    return 0;
}