#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a = 0, b = 0, max;
    int wait = 0;
    int list[1000];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a >> b;
        if(((int (i) == n) & (wait != 0)) |( (int(i) == 0) & (a!=0)))
            wait =0;
        wait = wait - a + b;
        list[i-1] = wait;
    }
    max = list[0];
    for(int j = 0; j<n; j++){
        if(list[j] > max)
            max = list [j];
    }
    cout << max; 
    return 0;
}