#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cases;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> cases;
        if (cases % 3 == 0){
            cout << "Second" << endl;
        }else
            cout << "First" << endl;
    }
    return 0;
}