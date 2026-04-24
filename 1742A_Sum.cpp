#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c, min, max;
    cin >> n;
    for(int i = 0;  i < n; i++){
        cin >> a >> b >> c;
        if((abs(a-b) == c) | (abs(a-c)==b) | (abs(b-c)==a)){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
    }
    return 0;
}