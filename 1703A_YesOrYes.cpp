#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string letter;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> letter;
        for (int j = 0; j < int(letter.size()); j++)
            letter[j] = tolower(letter[j]);
        if(letter == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}