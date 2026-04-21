#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 0;
    cin >> n;
    while(n!=0){
        if(n / 100 !=0){
            count = count + n/100;
            n = n%100;
        }
        if( n / 20 != 0){
            count = count + n/20;
            n = n%20;
        }
        if(n / 10 != 0){
            count = count + n / 10;
            n = n%10;
        }
        if (n / 5 != 0){
             count = count + n/5;
            n = n%5;
         }
        if (n/1 !=0){
            count = count + n/1;
            n = n%1;
        }
    }
    cout << count;
    return 0;
}