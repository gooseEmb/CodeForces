#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, sum=0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum = (sum) + (pow(-1,i) * i);
    }
    cout << sum;
    return 0;
}