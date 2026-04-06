#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, friends;
    int  A1[n+1];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> friends;
        A1[friends] = i;
    } 
    for (int j = 1; j<=n; j++){
        cout << A1[j] << " ";
    }
    
    return 0;
}