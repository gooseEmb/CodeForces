#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, temp=0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        temp = n/10;
        cout << temp + n %10 << endl;
    }
    return 0;
}