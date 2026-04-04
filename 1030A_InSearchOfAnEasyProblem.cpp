#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , p;
    bool flag =false;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> p;
        if(p!=0)
            flag = true;
    }
    if(flag)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}