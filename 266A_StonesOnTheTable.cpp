#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, moves = 0;
    string stones;
    cin >> n;
    if((n>=1) & (n<=50)){
        cin >> stones;
        for (int i = 0; i < int(stones.size()); i++){
            if(stones[i] == stones[i-1])
                moves++;
        }
    cout << moves;
    }

    return 0;
}