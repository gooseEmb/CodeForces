#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string code;
    cin >> code;
    for (int  i = 0 ; i < int(code.length()); i++){
        if(code[i]=='.'){
            cout << 0;
        }
        else if(code[i]=='-' & code[i+1] == '.'){
            cout << 1;
            i++;
        }
        else if(code[i]=='-' & code[i+1] == '-'){
            cout << 2;
            i++;
        }
    }
    return 0;
}