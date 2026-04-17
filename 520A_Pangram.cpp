#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count =0;
    string word; 
    cin >> n;
    cin >> word;
    for (int i = 0; i < int(word.length()); i++){
        word[i] = tolower(word[i]);
    }
    sort(word.begin(), word.end());
    for (int i = 0; i < int(word.length()); i++){
        if (word[i] != word[i+1]){
            count++;
        }
    }
    if(count == 26)
        cout << "YES";    
    else
        cout << "NO";
    return 0;
}