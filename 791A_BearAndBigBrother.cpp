#include <bits/stdc++.h>
using namespace std;
//limark<bob weight
//limarks triple after every year
//bob double after every year
//limark most heavier than bob
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int year = 0;
    if(a<=b){
//at this point if both are equals is necesary use <=
        while(a <= b){
            ++year;
            a = a*3;
            b = b*2;
            
        }
    }
    cout << year;
    return 0;
}