#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n, i;
    cin >> n >> i;
    for(int j =1; j<=i; j++){
        if(n%10 == 0){
            n = n/10;
        }else{
            n-=1;
        }
    }
    cout << n;
    return 0;
}