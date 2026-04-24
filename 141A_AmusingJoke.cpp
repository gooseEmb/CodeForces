#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string  word1, word2, word3, addwords, sortwords;
    cin >> word1;
    cin >> word2;
    cin >> word3;
    addwords = word1+word2;
    sort(addwords.begin(), addwords.end());
    sort(word3.begin(), word3.end());
    if (addwords == word3)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}