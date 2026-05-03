#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, value;
    cin >> n;
    for(int i =0; i<n; i++){
        cin  >> value;
        if(value%2 !=0){
            cout << value / 2 << endl;
        }else
            cout << (value /2) -1 << endl;
    }
    return 0;
}