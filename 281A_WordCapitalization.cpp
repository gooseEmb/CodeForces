#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string wd;
    cin >> wd;
    if((int(wd[0]) >= 97) && (int(wd[0]) <= 122)){
        wd[0] = int(wd[0])-32;
    }
    cout << wd;
    return 0;
}