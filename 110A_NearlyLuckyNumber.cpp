#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    uint64_t n=0; 
    int count_numbers = 0;
    cin >> n;
    if ((n == 7) | (n==4))
        count_numbers++;
    while(n/10 != 0){
        if((n%10 == 7) | (n%10 == 4)){
            n = n/10;
        }else{
            n = n/10;
            count_numbers++;
        }
    }
    if(count_numbers != 0){
        cout << "NO";
    }else
        cout << "YES";
    return 0;
}