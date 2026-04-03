#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t, aux;
    int k = 0;
    bool flag = false;
    cin >> s;
    cin >> t;
    k = t.size()-1;
    for(int j = 0; j < int(s.size()); j++){
        if(t[k-j] != s[j])
            flag = true;
    }
    if(flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}