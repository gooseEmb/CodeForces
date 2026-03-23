#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char w[100];
    cin >> n;
    if (n>=1 && n<=100){
        for (int i = 1; i <= n; i++){
            cin >> w;
            if(strlen(w)<=10){
                cout << w <<endl;
            }else{
                cout << w[0] << strlen(w)-2 << w[strlen(w)-1]<<endl;
            }
        }
    }
    return 0;
}