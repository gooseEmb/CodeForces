#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    float sum=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k;
        sum = sum +k;
    }
    cout << (sum/(n*100))*100;
    
    return 0;
}