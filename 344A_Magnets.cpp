#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count=0;
    int magnet, lastMagnet=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> magnet;
        if(magnet != lastMagnet){
            count++;
            lastMagnet = magnet;
        }
    }
    cout << count;
    return 0;
}