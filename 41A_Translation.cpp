#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    int k = 0;
    bool flag = false;
    cin >> s;
    cin >> t;
    k = t.size()-1;
    if(s.size() == t.size()){
        for(int j = 0; j < int(s.size()); j++){
            if(t[k-j] != s[j])
                flag = true;
        }
    }
    else{
        flag = true;
    }
    if(flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}