#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, anton = 0, danik = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < int(s.size()); i++){
        if(s[i] == 'A')
            anton++;
        else if(s[i] == 'D')
            danik++;
    }
    if(anton > danik)
        cout << "Anton";
    else if (anton < danik)
        cout << "Danik";
    else if (anton == danik)
        cout << "Friendship";
    return 0;
}