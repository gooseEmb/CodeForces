#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int valuep = 0;
    int n, p = 0, q= 0;
    cin >> n;
    for(int i=1; i <= n; i++){
        cin >> p >> q;
        if((q - p) >= 2){
            valuep++;
        }
    }
    cout << valuep;
    return 0;
}